#include "gtest/gtest.h"
#include "Formula.h"

TEST(blaTest, test0)
{
    //arrange:
    //act:
    //assert:
    EXPECT_EQ(Formula::bla(0), 0);
}

TEST(blaTest, test10)
{
    //arrange:
    //act:
    //assert:
    EXPECT_EQ(Formula::bla(10), 200); //failing on purpose
}

TEST(blaTest, test50)
{
    //arrange:
    //act:
    //assert:
    EXPECT_EQ(Formula::bla(50), 100);
}