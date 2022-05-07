#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	{
		ScavTrap trap2("Steve");
		trap2.attack("Goblin");
		trap2.beRepaired(10);
		trap2.takeDamage(2);
		trap2.beRepaired(2);
		trap2.attack("Goblin");
		trap2.beRepaired(10);
		trap2.takeDamage(100);
		trap2.beRepaired(10);
		trap2.attack("Goblin");
		trap2.takeDamage(10);
	}
	{
		ClapTrap trap2("Orange");
		trap2.attack("Goblin");
		trap2.beRepaired(10);
		trap2.takeDamage(2);
		trap2.beRepaired(2);
		trap2.attack("Goblin");
		trap2.beRepaired(10);
		trap2.takeDamage(100);
		trap2.beRepaired(10);
		trap2.attack("Goblin");
		trap2.takeDamage(10);
	}
}