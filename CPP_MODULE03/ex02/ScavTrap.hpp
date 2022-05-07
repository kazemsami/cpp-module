#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& trap);
	ScavTrap& operator=(const ScavTrap& trap);
	void attack(const std::string &target);
	void guardGate();
};

#endif