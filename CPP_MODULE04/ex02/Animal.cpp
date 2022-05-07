#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = animal.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal sounds..." << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}