#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal{
private:
	Brain* brain;
public:
	Dog();
	~Dog();
	Dog(const Dog& animal);
	Dog& operator=(const Dog& animal);
	void makeSound() const;
	Brain* getBrain() const;
};

#endif