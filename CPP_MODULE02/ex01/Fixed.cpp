#include "Fixed.hpp"

Fixed::Fixed() : fpn(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpn = (num << this->fb);
}

Fixed::Fixed(const float num)
{

	std::cout << "Float constructor called" << std::endl;
	this->fpn = roundf((num * (float)(1<<this->fb)));
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
	this->fpn = fixed.fpn;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
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

float Fixed::toFloat(void) const
{
	return ((float)this->fpn / (float)(1<<this->fb));
}

int	Fixed::toInt(void) const
{
	return (this->fpn >> this->fb);
}