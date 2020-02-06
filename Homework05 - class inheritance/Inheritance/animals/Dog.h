//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(std::string n);

	void speak() const;
};

