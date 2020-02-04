//NAME: Vincent Cormier
//DATE: 2020-02-03
//PURPOSE:Homework on Quicksorts withouth help

#include "QuickSort.h"

//This takes in a vector so that we dont have to modify the original
std::vector<int> qsort(const std::vector<int> v)
{
	std::vector<int> awn;
	awn = v;

	qsortHelp(0, awn.size() - 1, awn);

	return awn;
}

//Helps Iterate through the vector, ordering it as we go, calling it self for the subsections
void qsortHelp(const int i,const int j, std::vector<int>& v)
{
	int  temp = i;
	if (i != j) {
		for (int h = i; h < j; h++) {
			if (v[h] < v[j]) {
				temp++;
			}
		}
		std::swap(v[j], v[temp]);
		for (int h = i; h < temp; h++) {
			if (v[h] > v[temp]) {
				bool swapped = false;
				while (!swapped) {
					int k = temp;
					if (v[k] < v[temp]) {
						std::swap(v[h], v[k]);
						swapped = true;
					}
					if (k >= j) {
						swapped = true;	
					}
					k++;
				}
			}
		} 
		if(i !=(temp - 1) && i != temp) {
			qsortHelp(i, temp - 1, v);
		}
		if ((temp + 1) != i && i != temp) {
			qsortHelp(temp + 1, j, v);
		}
	}
}
