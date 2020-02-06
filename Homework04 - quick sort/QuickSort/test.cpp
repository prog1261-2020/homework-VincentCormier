//NAME: Vincent Cormier
//DATE: 2020-02-03
//PURPOSE:Homework on Quicksorts withouth help

#include "pch.h"
#include "gtest/gtest.h"
#include "QuickSort.h"

//TEST(TestCaseName, Testqsort01) {
//
//	std::vector<int> v{ 2,1 };
//
//	std::vector<int> result = qsort(v);
//	std::vector<int> expected{ 1,2 };
//	
//	ASSERT_EQ(expected, result);
//};

TEST(TestCaseName, Testqsort02) {

	std::vector<int> v{ 1,4,7,6,2 };

	std::vector<int> result = qsort(v);
	std::vector<int> expected{ 1,2,4,6,7 };

	ASSERT_EQ(expected, result);
};

//This test provided by Anastasia
/*TEST(TestCaseName, TestQSortCallFunc03) {
	srand((size_t)0);
	int SIZE = 100;
	std::vector<int> v;
	v.reserve(SIZE);

	for (int i = 0; i < SIZE; ++i) {
		v.push_back(rand() % SIZE);
	}

	auto vResult = qsort(v);

	bool isInOrder = true;
	for (int i = 0; i < vResult.size() - 1; ++i) {
		if (vResult[i] < vResult[i])
			isInOrder = false;
	}

	ASSERT_EQ(vResult.size(), v.size());
	ASSERT_TRUE(isInOrder);
}*/