/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:08:56 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 18:07:23 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &rhs) : _type(rhs._type) {}

AMateria &AMateria::operator = (const AMateria &rhs)
{
	_type = rhs._type;
	return (*this);
}

AMateria::~AMateria() {}

std::string	const	&AMateria::getType(void) const
{
	return _type;
}

void	AMateria::use(ICharacter &) {}
