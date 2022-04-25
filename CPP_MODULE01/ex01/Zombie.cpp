#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
}

Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}