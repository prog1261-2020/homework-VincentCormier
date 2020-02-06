//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#include "Cat.h"

Cat::Cat(std::string n) : Animal(n, "cat","meow") {}

void Cat::speak() const {
	Animal::speak();

	//std::cout << "I, " << getName() << ", am a garbage cat." << std::endl;
	std::cout << "I, " << name << ", am a garbage cat." << std::endl;
}