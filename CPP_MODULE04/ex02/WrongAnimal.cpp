#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = animal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = animal.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}