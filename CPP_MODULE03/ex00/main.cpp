#include "ClapTrap.hpp"

int main()
{
	ClapTrap trap("Donald");
	trap.attack("Goblin");
	trap.beRepaired(10);
	trap.takeDamage(2);
	trap.beRepaired(10);
	trap.takeDamage(4);
	trap.beRepaired(2);
	trap.takeDamage(10);
	trap.beRepaired(5);
	trap.attack("Goblin");
	trap.takeDamage(5);
	ClapTrap trap2("Steve");
	trap2.attack("Goblin");
	trap2.beRepaired(10);
	trap2.takeDamage(2);
	trap2.beRepaired(2);
	trap2.takeDamage(2);
	trap2.beRepaired(2);
	trap2.takeDamage(2);
	trap2.beRepaired(2);
	trap2.takeDamage(2);
	trap2.beRepaired(2);
	trap2.attack("Goblin");
	trap2.attack("Goblin");
	trap2.attack("Goblin");
	trap2.attack("Goblin");
	trap2.attack("Goblin");
	trap2.attack("Goblin");
	trap2.beRepaired(10);
	trap2.takeDamage(10);
}