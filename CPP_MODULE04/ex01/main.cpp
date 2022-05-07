#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
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
	Cat* cat = new Cat();
	Brain *brain;
	brain = cat->getBrain();
	brain->ideas[0] = "idea 1";
	Cat* cpycat = new Cat(*cat);
	Brain *cpybrain = cpycat->getBrain();
	std::cout << cpybrain->ideas[0] << std::endl;
	delete(cat);
	std::cout << cpybrain->ideas[0] << std::endl;
	delete(cpycat);
	return 0;
}