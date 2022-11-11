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

bool Fixed::operator!=(const Fixed& fixed) const
{
	return (this->getRawBits() !=  fixed.getRawBits());
}

bool Fixed::operator>(const Fixed& fixed) const
{
	return (this->getRawBits() >  fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const
{
	return (this->getRawBits() <  fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed) const
{
	return (this->getRawBits() ==  fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	return (this->getRawBits() >=  fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	return (this->getRawBits() <=  fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (temp);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (temp);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed temp(this->toFloat() * fixed.toFloat());
	return (temp);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed temp(this->toFloat() / fixed.toFloat());
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->fpn--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return (temp);
}

Fixed& Fixed::operator++()
{
	this->fpn++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return (temp);
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

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}