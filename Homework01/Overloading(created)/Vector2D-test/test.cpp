#include "gtest/gtest.h"
#include "../Vector2Dlib/Vector2D.h"

TEST(Vector2DTestSuite, constructorTest01) {
	Vector2D v1(1, 1);

	std::string expectedResult = "(1, 1)";
	std::string result = v1.toString();
	
	EXPECT_EQ(expectedResult, result);
  
}

TEST(Vector2DTestSuite, equalsTest01) {
	Vector2D v1(1, 1);
	Vector2D v2(2, 1);

	EXPECT_FALSE(v1 == v2);
}

TEST(Vector2DTestSuite, equalsTest02) {
	Vector2D v1(1, 1);
	Vector2D v2(1, 1);

	EXPECT_TRUE(v1 == v2);
}

TEST(Vector2DTestSuite, notEqualsTest01) {
	Vector2D v1(1, 1);
	Vector2D v2(2, 1);

	EXPECT_TRUE(v1 != v2);
}

TEST(Vector2DTestSuite, notEqualsTest02) {
	Vector2D v1(1, 1);
	Vector2D v2(2, 1);

	EXPECT_FALSE(v1 != v2);
}

TEST(Vector2DTestSuite, greaterThanTest01) {
	Vector2D v1(2, 2);
	Vector2D v2(4, 8);

	EXPECT_TRUE(v2 > v1);
}

TEST(Vector2DTestSuite, greaterThanTest02) {
	Vector2D v1(2, 2);
	Vector2D v2(4, 8);

	EXPECT_FALSE(v1 > v2);
}

TEST(Vector2DTestSuite, lowerThanTest01) {
	Vector2D v1(1, 2);
	Vector2D v2(2, 8);

	EXPECT_TRUE(v1 < v2);
}

TEST(Vector2DTestSuite, lowerThanTest02) {
	Vector2D v1(1, 2);
	Vector2D v2(2, 8);

	EXPECT_FALSE(v2 < v1);
}

TEST(Vector2DTestSuite, greaterThanEqualsTest01) {
	Vector2D v1(1, 2);
	Vector2D v2(2, 8);

	EXPECT_TRUE(v2 >= v1);
}

TEST(Vector2DTestSuite, greaterThanEqualsTest02) {
	Vector2D v1(1, 2);
	Vector2D v2(2, 8);

	EXPECT_FALSE(v1 >= v2);
}

TEST(Vector2DTestSuite, greaterThanEqualsTest03) {
	Vector2D v1(1, 2);
	Vector2D v2(1, 2);

	EXPECT_TRUE(v1 >= v2);
}

TEST(Vector2DTestSuite, lowerThanEqualsTest01) {
	Vector2D v1(1, 2);
	Vector2D v2(2, 8);

	EXPECT_TRUE(v1 <= v2);
}

TEST(Vector2DTestSuite, lowerThanEqualsTest02) {
	Vector2D v1(1, 2);
	Vector2D v2(2, 8);

	EXPECT_FALSE(v2 <= v1);
}

TEST(Vector2DTestSuite, lowerThanEqualsTest03) {
	Vector2D v1(1, 2);
	Vector2D v2(2, 3);

	EXPECT_TRUE(v1 <= v2);
}
