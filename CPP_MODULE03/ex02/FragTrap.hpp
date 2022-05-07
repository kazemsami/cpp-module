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
	void guardGate();
	void highFivesGuys(void);
};

#endif