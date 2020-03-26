#include "Game.h"
#include "HumanPlayer.h"
#include "Player.h"
#include "AiPlayer.h"
#include "Board.h"
#include <iostream>
#include <string>

/*
Most all code provided by Dr. Burchill
Homework that got disturbed by other
obligations
*/

const std::string boardPositions = "1 2 3\n4 5 6\n7 8 9\n\n";

int main() {
	Player* one = new HumanPlayer('X');
	Player* two = new HumanPlayer('O');
	Game tictactoe(one, two, new Board());

	tictactoe.welcome();
	tictactoe.play();
	tictactoe.annouceResult();
	
}



