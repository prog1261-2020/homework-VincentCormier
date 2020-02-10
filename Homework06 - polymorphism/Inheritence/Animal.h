//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#pragma once
#include <string>
#include <iostream>


class Animal
{
public:
	//making abstract things, where you can implement it in different ways later
	// = 0; means abstract
	//The whole class has become abstract
	//virtual void move() = 0;

	const std::string& getName() const;
	const std::string& getType() const;
	const std::string& getSound() const;

	virtual void speak() const;

	virtual void move() = 0;
private:
	/*std::string name;
	std::string type;
	std::string sound;*/
	
	//Because we dont want the default no arg constructor to be used
	Animal() = delete;
protected:
	//So now only derived classes can make animals, making them more pertinant
	Animal(std::string name, std::string type, std::string sound);

	std::string name;
	std::string type;
	std::string sound;

};

