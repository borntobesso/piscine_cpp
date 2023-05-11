/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:28:46 by sojung            #+#    #+#             */
/*   Updated: 2022/07/25 12:10:08 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string newType)
{
	this->type.assign(newType);
}

Weapon::~Weapon(){}

const std::string	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(const std::string newType)
{
	this->type.assign(newType);
}
