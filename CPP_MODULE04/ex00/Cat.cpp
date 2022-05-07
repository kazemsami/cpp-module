#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& animal) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = animal;
}

Cat& Cat::operator=(const Cat& animal)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = animal.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}