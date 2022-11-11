#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	try
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
		Animal* animals[10];
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for (int i = 0; i < 10; i++)
		{
			delete(animals[i]);
		}
		const WrongAnimal* wrongAnimal = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();
		wrongAnimal->makeSound();
		wrongCat->makeSound();
		delete(wrongAnimal);
		delete(wrongCat);
		WrongCat wrcat;
		wrcat.makeSound();
		Dog basic;
		Brain *brain = basic.getBrain();
		brain->ideas[0] = "test";
		{
			Dog tmp = basic;
		}
		std::cout << brain->ideas[0] << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	return (0);
}