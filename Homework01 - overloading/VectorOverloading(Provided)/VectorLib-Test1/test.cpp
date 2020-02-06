#include "gtest/gtest.h"
#include "../StaticLib1/Vector2D.h"


TEST(Vector2DTestSuite, constructorTest01) {
    Vector2D v1(1, 1);

    std::string expectedResult = "(1, 1)";
    std::string result = v1.toString();

    EXPECT_EQ(expectedResult, result);
}


TEST(Vector2DTestSuite, equalsTest01) {
    Vector2D v1(1, 1);
    Vector2D v2(1, 1);

    EXPECT_TRUE(v1 == v2);
}


TEST(Vector2DTestSuite, equalsTest02) {
    Vector2D v1(1, 1);
    Vector2D v2(2, 1);

    EXPECT_FALSE(v1 == v2);
}


TEST(Vector2DTestSuite, notEqualsTest01) {
    Vector2D v1(5, 1);
    Vector2D v2(1, 1);

    EXPECT_TRUE(v1 != v2);
}


TEST(Vector2DTestSuite, notEqualsTest02) {
    Vector2D v1(1, 1);
    Vector2D v2(1, 1);

    EXPECT_FALSE(v1 != v2);
}

//ASSERT_FALSE what is ASSERT






TEST(Vector2DTestSuite, arithmaticOperatorTest03) {
	Vector2D v1(2, 3);

	Vector2D expectedResult(3, 4);
	Vector2D v2 = ++v1;

	ASSERT_EQ(v1, expectedResult);
	ASSERT_EQ(v2, expectedResult);
}


TEST(Vector2DTestSuite, arithmaticOperatorTest04) {
	Vector2D v1(2, 3);

	Vector2D expectedResult(3, 4);
	Vector2D v2 = v1++;

	ASSERT_EQ(v1, expectedResult);
	ASSERT_EQ(v2, Vector2D(2,3));
}

