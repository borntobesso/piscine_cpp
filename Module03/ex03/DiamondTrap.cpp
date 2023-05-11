/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:13:27 by sojung            #+#    #+#             */
/*   Updated: 2022/08/04 17:18:21 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name)
: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_name = name;
	FragTrap::setDefaultHitPoints();
	ScavTrap::setDefaultEnergyPoints();
	FragTrap::setDefaultAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs)
: ClapTrap(rhs._name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	_name = rhs._name;
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	_name = rhs._name;
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

std::string	DiamondTrap::getName(void) const
{
	return (_name);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My own name :\t\t" << getName() << std::endl;
	std::cout << "My ClapTrap name :\t" << ClapTrap::getName() << std::endl;
}
