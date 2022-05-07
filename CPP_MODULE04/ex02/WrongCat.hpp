#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "iostream"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& animal);
	WrongCat& operator=(const WrongCat& animal);
	void makeSound() const;
};

#endif