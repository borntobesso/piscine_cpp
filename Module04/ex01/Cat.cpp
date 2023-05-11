/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:38:25 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 17:50:52 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
: Animal("Cat"), _brain(new Brain)
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &rhs)
: Animal(rhs.getType()), _brain(new Brain)
{
	std::cout << "Cat copy constructor called" << std::endl;

	for (int i = 0; i < 100; i++)
		_brain->setIdeas(i, (rhs._brain->getIdeas(i)));
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat	&Cat::operator = (const Cat &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	for (int i = 0; i < 100; i++)
		_brain->setIdeas(i, (rhs._brain->getIdeas(i)));
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MeOooOW" << std::endl;
}
