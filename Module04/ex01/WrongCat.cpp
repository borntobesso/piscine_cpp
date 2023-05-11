/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:01:12 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 13:17:26 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
: WrongAnimal(rhs.getType())
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator = (const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "MeOooOW" << std::endl;
}
