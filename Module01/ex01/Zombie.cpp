/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:29:51 by sojung            #+#    #+#             */
/*   Updated: 2022/07/22 12:08:46 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "Foo";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
