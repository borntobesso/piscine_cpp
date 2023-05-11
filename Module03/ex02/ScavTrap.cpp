/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:25:52 by sojung            #+#    #+#             */
/*   Updated: 2022/08/03 15:14:25 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;

	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;

	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
: ClapTrap(rhs.getName())
{
	std::cout << "ScavTrap copy constructor called" << std::endl;

	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &rhs)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());

	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target \
		<< ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << "Energy of ScavTrap " << getName() << " is too low, cannot attack" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " <<  getName() << " is now in Gate keeper mode" << std::endl;
}
