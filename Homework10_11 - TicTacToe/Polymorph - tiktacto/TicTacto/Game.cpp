#include "Game.h"
#include <sstream>
#include <iostream>

bool Game::isPlaying() const {
	return !(isTie() || isWon());
}

bool Game::isTie() const {
	return (board->isFull() && !isWon());
}

bool Game::isWon() const {
	bool won = false;
	for (auto p : players) {
		won = won || board->isWinner(p->getPiece());
	}
	return won;
}

std::string Game::getInstructions() const {
	std::stringstream ss;
	ss << "\tWelcome to TIC-TAC-TOE\n\n";
	ss << "Make your move by entering a number, 1-9. The number\n";
	ss << "corresponds with board position, as illustrated: \n\n";
	ss << board->getBoardPlaces();

	ss << "\n\nGet ready to do battle...\n\n";
	return ss.str();

}

void Game::nextPlayer() {
	currentPlayer = (currentPlayer + 1) % NUM_PLAYERS;
}

void Game::getAnnounceResult() const {
	std::stringstream ss;

	ss << "The battle is finished, \n\n";
	if (isTie()) {
		ss << "it tie\n";
	}
	else {
		for (auto p : players) {
			if (board->isWinner(p->getPiece())) {
				std::cout << "The winner is player " << p->getPiece() << "\n\n";
			}
		}
	}
	std::cout << ss.str();
}

void Game::play() {

	currentPlayer = FIRST;
	board->reset();
	while (isPlaying()) {
		system("cls");
		std::cout << board->getBoardPlaces();
		std::cout << "\n\n\n";
		std::cout << board->getCurrentBoard();
		std::cout << "\n\n";

		int move = player[currentPlayer]->getMove();
		while (!board->isValidMove(move)) {
			std::cout << "You cant move there try again: ";
			move = players[currentPlayer]->getMove();
		}
		board->makeMove(players[currentPlayer]->getPiece(), move);
		nextPlayer();
	}
	system("cls");
	std::cout << board->getBoardPlaces();
	std::cout << "\n\n\n";
	std::cout << board->getCurrentBoard();
	std::cout << "\n\n";
}


