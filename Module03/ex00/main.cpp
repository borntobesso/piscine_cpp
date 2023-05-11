/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:49:38 by sojung            #+#    #+#             */
/*   Updated: 2022/08/03 12:54:02 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Sousou");
	ClapTrap b = a; // copy constructor

	std::cout << "ClapTrap a : " << a.getName() << " " << a.getHitPoints() << " " << a.getEnergyPoints() << " " << a.getAttackDamage() << std::endl;
	std::cout << "ClapTrap b : " <<b.getName() << " " << b.getHitPoints() << " " << b.getEnergyPoints() << " " << b.getAttackDamage() << std::endl << std::endl;

	ClapTrap c;

	std::cout << "ClapTrap c before assignment : " <<c.getName() << " " << c.getHitPoints() << " " << c.getEnergyPoints() << " " << c.getAttackDamage() << std::endl;

	c = b; // assignment operator

	std::cout << "ClapTrap c after assignment : " <<c.getName() << " " << c.getHitPoints() << " " << c.getEnergyPoints() << " " << c.getAttackDamage() << std::endl;

	a.attack("Sousou(b)");
	b.takeDamage(a.getAttackDamage());

	std::cout << "ClapTrap a after the attack : " << a.getName() << " " << a.getHitPoints() << " " << a.getEnergyPoints() << " " << a.getAttackDamage() << std::endl;
	std::cout << "ClapTrap b after the attack : " <<b.getName() << " " << b.getHitPoints() << " " << b.getEnergyPoints() << " " << b.getAttackDamage() << std::endl << std::endl;

	b.beRepaired(a.getAttackDamage());

	std::cout << "ClapTrap b after the repair : " <<b.getName() << " " << b.getHitPoints() << " " << b.getEnergyPoints() << " " << b.getAttackDamage() << std::endl << std::endl;

	return (0);
}
