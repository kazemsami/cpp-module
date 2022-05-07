#include "Cat.hpp"

Cat::Cat() : brain(new Brain)
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete(this->brain);
}

Cat::Cat(const Cat& animal) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
		this->brain = new Brain(*animal.brain);
	}
}

Cat& Cat::operator=(const Cat& animal)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
		delete(this->brain);
		this->brain = new Brain(*animal.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}