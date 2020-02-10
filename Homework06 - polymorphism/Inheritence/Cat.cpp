//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#include "Cat.h"

Cat::Cat(std::string n) : Animal(n, "cat", "meow") {}

void Cat::speak() const {
	Animal::speak();

	//std::cout << "I, " << getName() << ", am a garbage cat." << std::endl;
	std::cout << "I, " << name << ", am ";
	if (name != "Louie")
		std::cout << "not ";
	std::cout << "a garbage cat." << std::endl;
}

void Cat::move()
{
	std::cout << "I just strut my stuff in the shadows" << std::endl;
}

int Cat::pet() {
	return ++petted;
}
