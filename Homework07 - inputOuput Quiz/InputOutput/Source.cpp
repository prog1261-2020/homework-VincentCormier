//NAME: Vincent Cormier
//DATE: 2020/03/02
//PURPOSE: Getting familiar with input and output stream

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cstdlib>

int main() {

	std::string line;
	std::fstream outFileQuiz;
	std::stringstream question;
	std::string awnser;
	std::string userInput;
	outFileQuiz.open("quiz.txt",
		std::ios::out |
		std::ios::in |
		std::ios::binary);

	if (outFileQuiz.fail()) {
		std::cerr << "Error Opening File" << std::endl;
		exit(1);
	}


	if (outFileQuiz.is_open()) {
		while (!outFileQuiz.eof()) {
			for (int i = 0; i < 5; ++i) {
				getline(outFileQuiz, line);
				question << line << std::endl;
			}
			getline(outFileQuiz, line);
			awnser = line;
			std::cout << question.str() << std::endl;
			std::cin >> userInput;
			if (userInput  ==  awnser) {
				std::cout << "Yup, that's right!" << std::endl;
				system("pause");
				system("CLS");
			} else {
				std::cout << "Nope, not right!" << std::endl;
				system("pause");
				system("CLS");
			}
			question.str("");
		}

		outFileQuiz.close();
	}
	else {
		std::cout << "Unable to open file!" << std::endl;
	}

}