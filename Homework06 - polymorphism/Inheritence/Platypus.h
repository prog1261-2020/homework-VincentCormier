#pragma once
#include "Animal.h"
class Platypus :
	public Animal
{
public:
	Platypus(std::string n);

	void speak() const override;

	void move() override;
};

