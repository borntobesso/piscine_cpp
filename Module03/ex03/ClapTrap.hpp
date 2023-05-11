/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:55:47 by sojung            #+#    #+#             */
/*   Updated: 2022/08/04 17:18:23 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap(const std::string &name);
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &oldClapTrap);
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
