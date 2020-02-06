#include "sortFunctions.h"

std::vector<int> bsort(const std::vector<int> v)
{
	std::vector<int> r = v;
	bool done = false;
	for (int i = r.size(); i > 0; i--) {
		while (!done) {
			done = true;
			for (int j = 0; j < r.size() - 1; j++) {
				if (r[j] > r[j + 1]) {
					//int tmp = r[j];
					//r[j] = r[j + 1];
					//r[j + 1] = tmp;
					std::swap(r[j], r[j + 1]);
					done = false;
				}
			}
		}
	}

	return r;
}

std::vector<int> ssort(const std::vector<int> v)
{
	std::vector<int> r = v;

	for (int i = 0; i < r.size(); i++) {
		int smallPosition = i;
		for (int j = i; j < r.size(); j++) {
			if (r[i] > r[j]) {
				smallPosition = j;
			}
		}
		std::swap(r[i], r[smallPosition]);
	}

	return r;
}

