/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:36:49 by sojung            #+#    #+#             */
/*   Updated: 2022/08/03 16:01:35 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &rhs)
: ClapTrap(rhs.getName())
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &rhs)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	setHitPoints(rhs.getHitPoints());
	setEnergyPoints(rhs.getEnergyPoints());
	setAttackDamage(rhs.getAttackDamage());

	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks " << target \
		<< ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout << "Energy of FragTrap " << getName() << " is too low, cannot attack" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " requires a positive high five!" << std::endl;
}
