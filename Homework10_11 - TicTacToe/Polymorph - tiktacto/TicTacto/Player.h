#pragma once

class Player
{
public:
	Player(char p) :piece(p) {};
	virtual ~Player() {};

	virtual void makeMove()= 0;
	char getPiece() {
		return piece;
	};

private:
	char piece;
};

