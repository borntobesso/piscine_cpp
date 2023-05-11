/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:53:25 by sojung            #+#    #+#             */
/*   Updated: 2022/07/25 12:09:58 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
