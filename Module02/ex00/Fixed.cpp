/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:59:36 by sojung            #+#    #+#             */
/*   Updated: 2022/07/27 17:34:56 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixedPointNumber = 0;
	
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &oldFixed)
{
	_fixedPointNumber = oldFixed.getRawBits();

	std::cout << "Copy constructor called" << std::endl;
}

void	Fixed::operator = (const Fixed &oldFixed)
{
	_fixedPointNumber = oldFixed.getRawBits();

	std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointNumber = raw;
}
