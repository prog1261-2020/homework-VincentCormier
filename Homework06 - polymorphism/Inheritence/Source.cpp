//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes


#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Duck.h"
#include <vector>
#include <memory>
#include "Platypus.h"
#include "Dragon.h"

int main(){


	Cat cat("Louie");

	std::cout << "\n\n";
	cat.speak();
	std::cout << "\n\n";


	Dog dog("Fido");

	std::cout << "\n\n";
	dog.speak();
	std::cout << "\n\n";

	Duck duck("Quackers");

	std::cout << "\n\n";
	duck.speak();
	std::cout << "\n\n";

	Animal* c = new Cat("Pixel");
	Animal* d = new Dog("Ruff");

	c->speak();
	d->speak();

	std::vector< std::unique_ptr<Animal> > zoo;

	zoo.push_back(std::make_unique<Cat>("Azreal"));
	
	zoo[0]->speak();

	zoo.push_back(std::make_unique <Dog>("Belial"));
	zoo.push_back(std::make_unique<Duck>("Sammiel"));

	for (auto& a : zoo) {
		a->speak();
	}


	Duck* e = new Duck("Asgore");

	e->swim();
	
	//b->swim();

	//that dog, treat it like a duck
	//that is down casting
	//AS A RULE we should never downcast!



	std::cout << "\n\nStart of Homework 6 \n\n\n" << std::endl;
	
	zoo.push_back(std::make_unique<Platypus> ("Perry"));
	zoo.push_back(std::make_unique<Dragon>("Asmodai"));
	
	for (auto& a : zoo) {
		a->speak();
		a->move();
		std::cout << "\n";
	}
}