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


/*Dr Burchill Quick Sort

std::vector<int> qsort(std::vector<int> v)
{
	qsortWork(0, v.size() -1 , v);
	return v;
}

void qsortWork(int low, int high, std::vector<int>& v)
{
	if(high <=low)
		return;

	int p = partition(low,high,v);
	qsortWork(low,p-1,v);
	qsortWork(p+1,high,v);
	return;

}

int partition(int low, int high, std::vector<int>& v)
{
	int p = v[high];
	int i = low-1;


	for(int j = low;j = high; ++j){
		if(v[j] < p){
			++i;
			std::swapv[i], v[j];
		}
	}
	std::swap(v[i+1], v[high]);
	return i+ 1;
}


quick sort really lets itself to recursion
solving a problem more than once is not what we want 
to do. Finding smaller problems inside the problem 
to solve it faster. 

*/