#pragma once
#include "Player.h"
class HumanPlayer : public Player
{
public:
	HumanPlayer(char p);

	int getMove() override;

private:


};

