#include "Dog.hpp"

Dog::Dog() : brain(new Brain)
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete(this->brain);
}

Dog::Dog(const Dog& animal) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
		this->brain = new Brain(*animal.brain);
	}
}

Dog& Dog::operator=(const Dog& animal)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
		delete(this->brain);
		this->brain = new Brain(*animal.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark..." << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}