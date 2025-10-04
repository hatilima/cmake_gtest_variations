 
https://notes.eatonphil.com/unit-testing-c-code-with-gtest.html

TestProject/
	|
  	|
  	|---src/
	|	|--main.c
	|     	|--widget.c
	|	|--customer.c
  	|
	|---include/
	|	|---testy/
	|	|	|-widget.h
	|	|	|-customer.h
	|
	|---test/
		|--test_widget.cpp
		|--test_customer.cpp
		|--main.cpp
		

The library under test is called testy. This testy library has two main modules, widget module and customer module.
