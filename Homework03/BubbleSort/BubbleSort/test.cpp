//NAME:Vincent Cormier
//DATE:2020-01-30
//PURPOSE:We learning sorts

#include "gtest/gtest.h"
#include <vector>
#include "sortFunctions.h"
#include <algorithm>

//The function can be called and it works
TEST(TestCaseName, TestBSsortCallFunc) {
	std::vector<int> v = { 73,42,12,19 };

	auto vResult = bsort(v);

}
//how do we compare them? well at least they are the same size
TEST(TestCaseName, TestBSsort01) {
	std::vector<int> v = { 73,42,12,19 };
	std::vector<int> vExpected = { 12,19,42,73 };

	auto vResult = bsort(v);

	ASSERT_TRUE(vResult.size(), vExpected.size());

}

TEST(TestCaseName, TestBSsort02) {
	std::vector<int> v = { 73,42,12,19 };
	std::vector<int> vExpected = { 12,19,42,73 };

	auto vResult = bsort(v);

	bool isSame1 = (vResult[0] == vExpected[0]);
	bool isSame2 = (vResult[1] == vExpected[1]);
	bool isSame3 = (vResult[2] == vExpected[2]);
	bool isSame4 = (vResult[3] == vExpected[3]);


	ASSERT_TRUE(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame1);
	ASSERT_TRUE(isSame2);
	ASSERT_TRUE(isSame3);
	ASSERT_TRUE(isSame4);
}


//The function can be called and it works
TEST(TestCaseName, TestSSsortCallFunc) {
	std::vector<int> v = { 73,42,12,19 };

	auto vResult = ssort(v);

}
//how do we compare them? well at least they are the same size
TEST(TestCaseName, TestSSsort01) {
	std::vector<int> v = { 73,42,12,19 };
	std::vector<int> vExpected = { 12,19,42,73 };

	auto vResult = ssort(v);

	ASSERT_TRUE(vResult.size(), vExpected.size());

}

TEST(TestCaseName, TestSSsort02) {
	std::vector<int> v = { 73,42,12,19 };
	std::vector<int> vExpected = { 12,19,42,73 };

	auto vResult = ssort(v);

	bool isSame1 = (vResult[0] == vExpected[0]);
	bool isSame2 = (vResult[1] == vExpected[1]);
	bool isSame3 = (vResult[2] == vExpected[2]);
	bool isSame4 = (vResult[3] == vExpected[3]);


	ASSERT_TRUE(vResult.size(), vExpected.size());
	ASSERT_TRUE(isSame1);
	ASSERT_TRUE(isSame2);
	ASSERT_TRUE(isSame3);
	ASSERT_TRUE(isSame4);
}