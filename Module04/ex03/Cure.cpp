/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:39:02 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 15:54:11 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &) : AMateria("cure") {}

Cure::~Cure() {}

Cure &Cure::operator = (const Cure &)
{
	setType();
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*cureClone = new Cure();
	return (cureClone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

void	Cure::setType(void)
{
	_type = "cure";
}
