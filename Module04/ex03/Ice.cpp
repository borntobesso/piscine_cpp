/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:39:02 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 18:04:59 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
: AMateria("ice") {}

Ice::Ice(const Ice &)
: AMateria("ice") {}

Ice::~Ice() {}

Ice &Ice::operator = (const Ice &)
{
	setType();
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*iceClone = new Ice();
	return (iceClone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

void	Ice::setType(void)
{
	_type = "ice";
}
