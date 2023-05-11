/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:31:53 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 17:50:42 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
: Animal("Dog"), _brain(new Brain)
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &rhs)
: Animal(rhs.getType()), _brain(new Brain)
{
	std::cout << "Dog copy constructor called" << std::endl;

	for (int i = 0; i < 100; i++)
		_brain->setIdeas(i, (rhs._brain->getIdeas(i)));
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog	&Dog::operator = (const Dog &rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	for (int i = 0; i < 100; i++)
		_brain->setIdeas(i, (rhs._brain->getIdeas(i)));
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOUF WOUF !" << std::endl;
}
