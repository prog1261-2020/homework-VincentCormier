//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes

#pragma once
#include <string>
#include <iostream>


class Animal
{
public:
	Animal();
	Animal(std::string name, std::string type, std::string sound);

	const std::string& getName() const;
	const std::string& getType() const;
	const std::string& getSound() const;

	void speak() const;
private:
	/*std::string name;
	std::string type;
	std::string sound;*/
protected:
	std::string name;
	std::string type;
	std::string sound;

};

