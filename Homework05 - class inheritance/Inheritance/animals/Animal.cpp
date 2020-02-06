//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#include "Animal.h"

Animal::Animal(){}

Animal::Animal(std::string n, std::string t, std::string s) : name(n),type(t),sound(s){}

const std::string& Animal::getName() const{
	return name;
}

const std::string& Animal::getType() const{
	return type;
}

const std::string& Animal::getSound() const{
	return sound;
}

void Animal::speak() const
{
	std::cout << "I'm " << getName() << ", I am a " << getType() << " and I say " << getSound() << std::endl;
}
