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
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = trap;
}

FragTrap& FragTrap::operator=(const FragTrap& trap)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->hp = trap.hp;
	this->name = trap.name;
	this->ep = trap.ep;
	this->attdmg = trap.attdmg;
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "FragTrap " + this->name + " attacks " + target + ", causing " << this->attdmg <<  " points of damage!" << std::endl;
		this->ep--;
	}
	else if (this->hp <= 0 && this->ep == 0)
	{
		std::cout << "FragTrap Not enough energy points and hit points to attack" << std::endl;
	}
	else if (this->hp <= 0)
	{
		std::cout << "FragTrap You are dead can't attack" << std::endl;
	}
	else
	{
		std::cout << "FragTrap Not enough energy points to attack" << std::endl;
	}
}

void FragTrap::guardGate()
{
	std::cout << "FragTrap " + this->name + " is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Give me a high five mate... sike" << std::endl;
}