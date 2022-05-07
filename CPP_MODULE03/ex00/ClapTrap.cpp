#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), hp(10), ep(10), attdmg(0)
{
	this->maxHp = hp;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = trap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->hp = trap.hp;
	this->name = trap.name;
	this->ep = trap.ep;
	this->attdmg = trap.attdmg;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "ClapTrap " + this->name + " attacks " + target + ", causing " << this->attdmg <<  " points of damage!" << std::endl;
		this->ep--;
	}
	else if (this->hp <= 0 && this->ep == 0)
	{
		std::cout << "Not enough energy points and hit points to attack" << std::endl;
	}
	else if (this->hp <= 0)
	{
		std::cout << "You are dead can't attack" << std::endl;
	}
	else
	{
		std::cout << "Not enough energy points to attack" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if (this->hp > 0 && this->ep > 0 && this->hp != maxHp)
	{
		int tmp = this->hp;
		this->hp += amount;
		if (this->hp > maxHp)
		{
			std::cout << "Repairing " << maxHp - tmp << " hitpoints..." << std::endl;
			this->hp = maxHp;
		}
		else
		{
			std::cout << "Repairing " << amount << " hitpoints..." << std::endl;
		}
		this->ep--;
	}
	else if (this->hp <= 0 && this->ep == 0)
	{
		std::cout << "Not enough energy points and hit points to repair" << std::endl;
	}
	else if (this->hp <= 0)
	{
		std::cout << "You are dead can't repair" << std::endl;
	}
	else if (this->ep == 0)
	{
		std::cout << "Not enough energy points to repair" << std::endl;
	}
	else
	{
		std::cout << "Can't repair because your hp is already full" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0)
	{
		std::cout << "Taking " << amount << " damage..." << std::endl;
		this->hp -= amount;
	}
	else
	{
		std::cout << "You are already dead can't get damaged" << std::endl;
	}
}