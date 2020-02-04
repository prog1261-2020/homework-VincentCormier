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
