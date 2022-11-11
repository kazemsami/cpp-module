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
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete(meta);
		delete(j);
		delete(i);
		const WrongAnimal* wrongAnimal = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();
		wrongAnimal->makeSound();
		wrongCat->makeSound();
		delete(wrongAnimal);
		delete(wrongCat);
		WrongCat wrcat;
		wrcat.makeSound();
	}
	catch (std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	return 0;
}