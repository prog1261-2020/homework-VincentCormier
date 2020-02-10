//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#pragma once
#include "Animal.h"
class Duck : public Animal
{
public:

	Duck(std::string n);
	int feed();

	void speak() const override;

	void swim();

	void move() override;
private:
	int fed = 0;
};

