/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:04:45 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 13:20:30 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
: _type("Animal Type")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type)
: _type(type)
{
	std::cout << "Animal overloaded default constructor called" << std::endl;
}

Animal::Animal(const Animal &rhs)
: _type(rhs._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator = (const Animal &rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::setType(std::string name)
{
	_type = name;
}

void	Animal::makeSound(void) const
{
	std::cout << "I don't know what sound to make!" << std::endl;
}
