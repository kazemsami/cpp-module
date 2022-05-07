#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->attdmg = 30;
	this->ep = 100;
	this->maxHp = 100;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &trap) : ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	*this = trap;
}

FragTrap& FragTrap::operator=(const FragTrap& trap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->hp = trap.hp;
	this->name = trap.name;
	this->ep = trap.ep;
	this->attdmg = trap.attdmg;
	return *this;
}

void FragTrap::guardGate()
{
	std::cout << "FragTrap " + this->name + " is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Give me a high five mate... sike" << std::endl;
}