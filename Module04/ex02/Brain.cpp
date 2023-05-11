/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:15:03 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 17:51:19 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = (rhs.getIdeas(i));
}

Brain &Brain::operator = (const Brain &rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		_ideas[i] = (rhs.getIdeas(i));

	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdeas(unsigned i, const std::string idea)
{
	_ideas[i] = idea;
}

const std::string	&Brain::getIdeas(unsigned i) const
{
	return (_ideas[i]);
}
