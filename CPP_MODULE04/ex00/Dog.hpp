#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal{
public:
	Dog();
	~Dog();
	Dog(const Dog& animal);
	Dog& operator=(const Dog& animal);
	void makeSound() const;
};

#endif