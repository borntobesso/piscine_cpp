/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:44:18 by sojung            #+#    #+#             */
/*   Updated: 2022/07/28 17:18:49 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointNumber = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointNumber = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointNumber = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(Fixed const &oldFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPointNumber = oldFixed.getRawBits();
}

Fixed::Fixed(Fixed &oldFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPointNumber = oldFixed.getRawBits();
}

void	Fixed::operator = (const Fixed &oldFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointNumber = oldFixed.getRawBits();
}

void	Fixed::operator = (Fixed &oldFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointNumber = oldFixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

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

std::ostream &operator << (std::ostream &os, const Fixed &n)
{
	os << n.toFloat();
	return (os);
}
