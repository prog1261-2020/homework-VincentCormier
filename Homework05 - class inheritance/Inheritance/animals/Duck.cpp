//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#include "Duck.h"

Duck::Duck(std::string n) : Animal(n,"Duck","COIN") {}

void Duck::speak() const
{
	Animal::speak();

	std::cout << "I lake, I dive, I eat, Corn Flake" << std::endl;
}
