#include "Platypus.h"

Platypus::Platypus(std::string n) : Animal(n, "Platypus", "Kregnrkgnkg") {}

void Platypus::speak() const {
	Animal::speak();
	std::cout << "Secret agent in diguise..." << std::endl;
}

void Platypus::move() {
	std::cout << "...Where is he?" << std::endl;
}