/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:38:25 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 12:34:08 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &rhs)
: Animal(rhs.getType())
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator = (const Cat &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MeOooOW" << std::endl;
}
