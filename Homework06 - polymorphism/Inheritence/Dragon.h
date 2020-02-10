#pragma once
#include "Animal.h"
class Dragon :
	public Animal
{
public:
	Dragon(std::string n);

	void speak() const override;

	void move() override;
};

