/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:57:20 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 12:58:26 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: _type("WrongAnimal Type")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
: _type(type)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
: _type(rhs._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::setType(std::string name)
{
	_type = name;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I don't know what sound to make!" << std::endl;
}
