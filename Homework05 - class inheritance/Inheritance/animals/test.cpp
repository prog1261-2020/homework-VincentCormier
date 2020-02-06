//NAME:Vincent Cormier
//DATA:2020-02-06
//PURPOSE:Learning about inheritence in classes


#include "gtest/gtest.h"
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Duck.h"
TEST(TestCaseName, TestAnimal01) {
  
	Animal cat("Charlie", "Cat", "Meow");
	Animal dog("Watson", "Dog", "Gav");
	Animal duck("Quackers", "Duck", "Quck");

	std::cout << "\n\n";
	
	cat.speak();
	dog.speak();
	duck.speak();

	std::cout << "\n\n";
}

TEST(TestCaseName, TestAnimal02) {

	Cat cat("Louie");

	std::cout << "\n\n";
	cat.speak();
	std::cout << "\n\n";
}

TEST(TestCaseName, TestAnimal03) {

	Dog dog("Fido");

	std::cout << "\n\n";
	dog.speak();
	std::cout << "\n\n";
}

TEST(TestCaseName, TestAnimal04) {
	Duck duck("Quackers");

	std::cout << "\n\n";
	duck.speak();
	std::cout << "\n\n";
}