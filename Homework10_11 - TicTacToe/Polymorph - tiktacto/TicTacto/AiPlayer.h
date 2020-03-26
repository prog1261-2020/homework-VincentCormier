#pragma once
#include "Player.h"
#include "Board.h"

class AiPlayer : public Player
{
public:

	AiPlayer(char p, Board* b);

	int getMove() override;
private:
	Board* board;

};

std::vector<int> go{ 0,2,6,8,4,1,3,5,7};

