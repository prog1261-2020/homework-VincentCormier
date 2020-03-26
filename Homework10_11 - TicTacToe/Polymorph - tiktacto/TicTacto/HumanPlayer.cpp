#include "HumanPlayer.h"
#include <iostream>

HumanPlayer::HumanPlayer(char p) : Player(p)
{}

int getValidInput() {
	int m;
	std::cin >> m;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(1024, '\n');
		std::cout << "\nenter a number please: ";
		std::cin >> m;
	}
	return m;
}

int HumanPlayer::getMove() {
	std::cout << "Player " << getPiece() << "\'s move: ";
	int m = getValidInput();
	return m;
}