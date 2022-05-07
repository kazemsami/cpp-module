#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& animal) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = animal;
}

Dog& Dog::operator=(const Dog& animal)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->type = animal.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark..." << std::endl;
}