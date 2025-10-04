#include"gtest/gtest.h"
#include"../src/mylib/mylib.cpp"

TEST(MaxAndMinTest, Validation)
{
    EXPECT_EQ(maxValue(10, 3), 10);
    EXPECT_EQ(maxValue(-1, 0), 0);
    EXPECT_EQ(minValue(10, 3), 3);
    EXPECT_EQ(minValue(-1, 0), -1);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}