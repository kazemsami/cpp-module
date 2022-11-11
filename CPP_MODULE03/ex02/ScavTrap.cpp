#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->attdmg = 20;
	this->ep = 50;
	this->maxHp = 100;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &trap) : ClapTrap()
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = trap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& trap)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->hp = trap.hp;
	this->name = trap.name;
	this->ep = trap.ep;
	this->attdmg = trap.attdmg;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "ScavTrap " + this->name + " attacks " + target + ", causing " << this->attdmg <<  " points of damage!" << std::endl;
		this->ep--;
	}
	else if (this->hp <= 0 && this->ep == 0)
	{
		std::cout << "ScavTrap Not enough energy points and hit points to attack" << std::endl;
	}
	else if (this->hp <= 0)
	{
		std::cout << "ScavTrap You are dead can't attack" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap Not enough energy points to attack" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " + this->name + " is now in Gate keeper mode" << std::endl;
}