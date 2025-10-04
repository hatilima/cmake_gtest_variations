#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<stdio.h>
#include<stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 190
#define FNV_O 2166136261UL
#define FNV_P 16777619UL

typedef struct{
	char name[MAX_NAME];
	int age;
} person;

person* hash_table[TABLE_SIZE];

unsigned int compute_hash(const char* name)
{
	int length = strnlen(name, MAX_NAME);
	unsigned long int hash_value = 0;
	unsigned int i = 0;
	for(; i<length; ++i)
	{
		hash_value = hash_value * 37 + name[i];
	}
	return (hash_value % TABLE_SIZE); // % TABLE_SIZE
}

void init_hash_table()
{
	for(int i=0; i<TABLE_SIZE; i++)
	{
		hash_table[i] = NULL;
	}
}

void print_hash_table()
{
	printf("\n####### START OF TABLE #######\n");
	for(int i=0; i<TABLE_SIZE; i++)
	{
		if(hash_table[i]==NULL)
		{
			printf("\t%i\t- - -\n",i);
		}
		else
		{
			printf("\t%i\t%s\n", i, hash_table[i]->name);
		}
	}

	printf("\n####### END OF TABLE #######\n");
}

bool insert_to_hash_table(person* p)
{
	if(p == NULL) return false;
	int index = compute_hash(p->name);
	if(hash_table[index]!=NULL)
	{
		return false;
	}
	hash_table[index] = p;
	return true;
}

int main()
{
	init_hash_table();
	print_hash_table();

	unsigned int a = 10;

	printf("unsigned int: %ld", sizeof(a));

	person hatilima = {.age=39, .name="Hatilima"};
	person kalwani = {.age=77, .name="Kalwani"};
	person ambuya = {.age=44, .name="Mwanza"};
	person mapalo = {.age=3, .name="Mapalo"};
	person tipilile = {.age=44, .name="Tipilile"};
	person chikonde = {.age=35, .name="Chikonde"};
	person mwengwe = {.age=75, .name="Mwengwe"};
	person mwenda = {.age=32, .name="Mwenda"};
	person chileshe = {.age=30, .name="Chileshe"};
	person mwila = {.age=24, .name="Mwila"};

	insert_to_hash_table(&hatilima);
	insert_to_hash_table(&kalwani);
	insert_to_hash_table(&ambuya);
	insert_to_hash_table(&mapalo);
	insert_to_hash_table(&tipilile);
	insert_to_hash_table(&chikonde);
	insert_to_hash_table(&mwengwe);
	insert_to_hash_table(&mwenda);
	insert_to_hash_table(&chileshe);
	insert_to_hash_table(&mwila);

	print_hash_table();

	printf("\n#####################\n");
	printf("Hatilima: %d\n",compute_hash("Hatilima"));
	printf("Kalwani: %d\n",compute_hash("Kalwani"));
	printf("Mwanza: %d\n",compute_hash("Mwanza"));
	printf("Mapalo: %d\n",compute_hash("Mapalo"));
	printf("Tipilile: %d\n",compute_hash("Tipilile"));
	printf("Chikonde: %d\n",compute_hash("Chikonde"));
	printf("Mwengwe: %d\n",compute_hash("Mwengwe"));
	printf("Mwenda: %d\n",compute_hash("Mwenda"));
	printf("Chileshe: %d\n",compute_hash("Chileshe"));
	printf("Mwila: %d\n",compute_hash("Mwila"));

	printf("\n#####################\n");

	/*printf("\nHatilima => %d",compute_hash("Hatilima"));
	printf("\nMapalo => %d", compute_hash("Mapalo"));
	printf("\nEdina => %d", compute_hash("Edina"));
	printf("\nKalwani => %d", compute_hash("Kalwani"));
	printf("\nChibangulula => %d", compute_hash("Chibangulula"));
	printf("\nDaka => %d", compute_hash("Daka"));
	printf("\nBoniface => %d", compute_hash("Boniface"));
	printf("\nMary => %d", compute_hash("Mary"));
	printf("\nJack => %d", compute_hash("Jack"));
	printf("\nTipi => %d", compute_hash("Tipi"));*/
	return 0;
}
