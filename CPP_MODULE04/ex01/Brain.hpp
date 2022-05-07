#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);
	std::string ideas[100];
};

#endif