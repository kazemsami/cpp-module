#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
	std::string name;
	int hp;
	int ep;
	int attdmg;
	int maxHp;
	ClapTrap();
public:
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap &trap);
	ClapTrap& operator=(const ClapTrap &trap);
	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif