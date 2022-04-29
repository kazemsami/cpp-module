#include "Fixed.hpp"

Fixed::Fixed() : fpn(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fpn = fixed.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fpn = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn);
}