#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& trap);
	ScavTrap& operator=(const ScavTrap& trap);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();
};

#endif