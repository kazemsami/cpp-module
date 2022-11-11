#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	{
		ClapTrap *trap2 = new FragTrap("Fraggy");
		trap2->attack("Goblin");
		trap2->beRepaired(10);
		trap2->takeDamage(2);
		trap2->beRepaired(2);
		trap2->attack("Goblin");
		trap2->beRepaired(10);
		trap2->takeDamage(100);
		trap2->beRepaired(10);
		trap2->attack("Goblin");
		trap2->takeDamage(10);
		delete(trap2);
	}
	std::cout << "######################################################" << std::endl;
	{
		ClapTrap *trap2 = new ScavTrap("Steve");
		trap2->attack("Goblin");
		trap2->beRepaired(10);
		trap2->takeDamage(2);
		trap2->beRepaired(2);
		trap2->attack("Goblin");
		trap2->beRepaired(10);
		trap2->takeDamage(100);
		trap2->beRepaired(10);
		trap2->attack("Goblin");
		trap2->takeDamage(10);
		delete(trap2);
	}
}