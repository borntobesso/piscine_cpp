/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:59:09 by sojung            #+#    #+#             */
/*   Updated: 2022/08/03 14:36:19 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(void)
: _name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oldClapTrap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	_name = oldClapTrap._name;
	_hitPoints = oldClapTrap._hitPoints;
	_energyPoints = oldClapTrap._energyPoints;
	_attackDamage = oldClapTrap._attackDamage;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &oldClapTrap)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	_name = oldClapTrap._name;
	_hitPoints = oldClapTrap._hitPoints;
	_energyPoints = oldClapTrap._energyPoints;
	_attackDamage = oldClapTrap._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

std::string		ClapTrap::getName(void) const { return (this->_name); }

unsigned int	ClapTrap::getHitPoints(void) const { return (this->_hitPoints); }

unsigned int	ClapTrap::getEnergyPoints(void) const { return (this->_energyPoints); }

unsigned int	ClapTrap::getAttackDamage(void) const { return (this->_attackDamage); }

void	ClapTrap::setHitPoints(unsigned int amount) { _hitPoints = amount; }
void	ClapTrap::setEnergyPoints(unsigned int amount) { _energyPoints = amount; }
void	ClapTrap::setAttackDamage(unsigned int amount) { _attackDamage = amount; }

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "Energy of ClapTrap " << this->_name << " is too low, cannot attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " gets " << amount << " points of hit points back!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}
