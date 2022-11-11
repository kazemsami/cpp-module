#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& trap);
	FragTrap& operator=(const FragTrap& trap);
	void attack(const std::string &target);
	void guardGate();
	void highFivesGuys(void);
};

#endif