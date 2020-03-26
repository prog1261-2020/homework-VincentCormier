#pragma once
#include "Player.h"
#include "Board.h"

class Game
{
public:
	Game();

	Game(Player*, Player*, Board*);
	bool isPlaying() const;
	bool isTie() const;
	bool isWon() const;
	void nextPlayer();

	void welcome() const;
	void getAnnounceResult() const;
	std::string getInstructions() const;
	
	void play();
private:
	static const int NUM_PLAYERS = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;

	Board* board;
	Player* players[NUM_PLAYERS];
	int currentPlayer;
};

