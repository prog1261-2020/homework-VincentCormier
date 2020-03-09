//NAME: Vincent Cormier
//DATE: 2020-03-09
//PURPOSE: Using file reading to check how many words are in a doc, using maps

#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>



int main() {


	std::map<std::string, int>list;

	std::fstream story;

	std::string word;

	story.open("fox.txt", std::ios::out | std::ios::in | std::ios::binary);

	if (story.fail()) {
		std::cerr << "Error Opening File" << std::endl;
		exit(1);
	}

	while (story >> word) {
		
		
		for (int i = 0; i < word.size(); i++) {
			int len = word.size();
			if (ispunct(word[i])) {
				word.erase(i--, 1);
				len = word.size();
			}
		}
		for (int i = 0; i < word.size(); i++) {
			word[i] = tolower(word[i]);
		}

		if (list.count(word) == 0) {
			list[word];
			list[word]++;
		}
		else {
			list[word]++;
		}

	}




	for (auto p : list) {
		std::cout << "Word: " << p.first << " count : " << p.second << std::endl;
	}

	story.close();
}

