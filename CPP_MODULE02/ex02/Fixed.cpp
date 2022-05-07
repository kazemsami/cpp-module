#include "Fixed.hpp"

Fixed::Fixed() : fpn(0)
{
}

Fixed::Fixed(const int num)
{
	this->fpn = (num << this->fb);
}

Fixed::Fixed(const float num)
{

	this->fpn = roundf((num * (float)(1<<this->fb)));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->fpn = fixed.getRawBits();
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
	this->fpn = raw;
}

int Fixed::getRawBits(void) const
{
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