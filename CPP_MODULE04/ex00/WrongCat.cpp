#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& animal) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = animal;
}

WrongCat& WrongCat::operator=(const WrongCat& animal)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->type = animal.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}