//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#pragma once
#include "Animal.h"

//Still cant use private things tho
//buuuuuuuuut
//We sure can use protected!
class Cat : public Animal
{
public:
	Cat(std::string n);
	int pet();

	void speak() const override;

	void move() override;
private:
	int petted = 0;
};

