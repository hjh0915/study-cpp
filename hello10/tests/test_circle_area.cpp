#include "gtest/gtest.h"
#include "calculate.h"

TEST(areaTest, test1) {
    //arrange
    //act
    //assert
    Circle c;
    EXPECT_DOUBLE_EQ (c.area(1.0),  3.14159);
}