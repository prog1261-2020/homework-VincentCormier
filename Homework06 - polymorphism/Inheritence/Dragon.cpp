#include "Dragon.h"

Dragon::Dragon(std::string n) : Animal(n, "Dragon", "Rugissement") {}

void Dragon::speak() const {
	Animal::speak();
	std::cout << "Slay me not, I strive for peace among speacies!" << std::endl;
}

void Dragon::move() {
	std::cout << "THUS MY WINGS CARRY ME THROUGH THE CLOUDS, A SHADOW ATOP THE PEOPLE, A FORCE BEYOND COMPARE!" << std::endl;
}