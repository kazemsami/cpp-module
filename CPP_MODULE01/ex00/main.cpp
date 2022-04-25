#include "Zombie.hpp"

int main (void)
{
	Zombie myZombie;
	myZombie.setName("Normal Zombie");
	myZombie.announce();
	Zombie *myZombie2 = newZombie("NewZombie");
	myZombie2->announce();
	delete(myZombie2);
	randomChump("randomChump");
	return 0;
}