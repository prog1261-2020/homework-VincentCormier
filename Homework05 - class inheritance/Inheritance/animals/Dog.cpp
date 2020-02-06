//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#include "Dog.h"

Dog::Dog(std::string n) : Animal(n, "Dog", "Boerk") {}

void Dog::speak() const
{
	Animal::speak();
	std::cout << "I CHASE MY TAIL" << std::endl;
}
