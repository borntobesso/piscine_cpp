/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:55:47 by sojung            #+#    #+#             */
/*   Updated: 2022/08/03 14:27:42 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap(const std::string &name);
	ClapTrap();
	~ClapTrap();
	// A copy constructor is used to initialize a previously uninitialized object from some other object's data.
	ClapTrap(const ClapTrap &oldClapTrap);
	// An assignment operator is used to replace the data of a previously initialized object with some other object's data.
	ClapTrap	&operator = (const ClapTrap &oldClapTrap);

	std::string		getName(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;

	void	setHitPoints(unsigned int amount);
	void	setEnergyPoints(unsigned int amount);
	void	setAttackDamage(unsigned int amount);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
