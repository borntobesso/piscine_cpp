/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:39:42 by sojung            #+#    #+#             */
/*   Updated: 2022/08/01 17:00:17 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
*	CONSTRUCTORS & DESTRUCTOR
**/

Fixed::Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;
	_fixedPointNumber = 0;
}

Fixed::Fixed(const int n)
{
//	std::cout << "Int constructor called" << std::endl;
	_fixedPointNumber = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
//	std::cout << "Float constructor called" << std::endl;
	_fixedPointNumber = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(Fixed const &oldFixed)
{
//	std::cout << "Copy constructor called" << std::endl;
	_fixedPointNumber = oldFixed.getRawBits();
}

Fixed::Fixed(Fixed &oldFixed)
{
//	std::cout << "Copy constructor called" << std::endl;
	_fixedPointNumber = oldFixed.getRawBits();
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

/**
*	COPY ASSIGNMENT OPERATOR OVERLOAD
**/

Fixed	&Fixed::operator = (const Fixed &oldFixed)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointNumber = oldFixed.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator = (Fixed &oldFixed)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointNumber = oldFixed.getRawBits();
	return (*this);
}

/**
*	PUBLIC MEMBER FUNCTIONS
**/

int	Fixed::getRawBits(void) const
{
	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointNumber = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointNumber / (1 << _fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointNumber >> _fractionalBits);
}

/**
*	OPERATOR OVERLOAD
**/

std::ostream &operator << (std::ostream &os, const Fixed &n)
{
	os << n.toFloat();
	return (os);
}

bool	Fixed::operator > (const Fixed &f) const
{
	return ((this->toFloat() > f.toFloat()) ? true : false);
}

bool	Fixed::operator < (const Fixed &f) const
{
	return ((this->toFloat() < f.toFloat()) ? true : false);
}

bool	Fixed::operator >= (const Fixed &f) const
{
	return ((this->toFloat() >= f.toFloat()) ? true : false);
}

bool	Fixed::operator <= (const Fixed &f) const
{
	return ((this->toFloat() <= f.toFloat()) ? true : false);
}

bool	Fixed::operator == (const Fixed &f) const
{
	return ((this->toFloat() == f.toFloat()) ? true : false);
}

bool	Fixed::operator != (const Fixed &f) const
{
	return ((this->toFloat() != f.toFloat()) ? true : false);
}

Fixed	&Fixed::operator + (const Fixed &f)
{
	float newF = this->toFloat() + f.toFloat();
	this->_fixedPointNumber = roundf(newF * (1 << _fractionalBits));
	return (*this);
}

Fixed	&Fixed::operator - (const Fixed &f)
{
	float newF = this->toFloat() - f.toFloat();
	this->_fixedPointNumber = roundf(newF * (1 << _fractionalBits));
	return (*this);
}
	
Fixed	&Fixed::operator * (const Fixed &f)
{
	float newF = this->toFloat() * f.toFloat();
	this->_fixedPointNumber = roundf(newF * (1 << _fractionalBits));
	return (*this);
}

Fixed	&Fixed::operator / (const Fixed &f)
{
	float newF = this->toFloat() / f.toFloat();
	this->_fixedPointNumber = roundf(newF * (1 << _fractionalBits));
	return (*this);
}

Fixed	Fixed::operator ++ (void) // pre-increment
{
	Fixed	temp(*this);
	temp._fixedPointNumber = ++_fixedPointNumber;
	return (temp);
}
	
Fixed	Fixed::operator -- (void)
{
	Fixed	temp(*this);
	temp._fixedPointNumber = --_fixedPointNumber;
	return (temp);
}

Fixed	Fixed::operator ++ (int) // post-increment
{
	Fixed	temp(*this);
	temp._fixedPointNumber = _fixedPointNumber++;
	return (temp);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	temp(*this);
	temp._fixedPointNumber = _fixedPointNumber--;
	return (temp);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}
