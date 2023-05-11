/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:49:38 by sojung            #+#    #+#             */
/*   Updated: 2022/08/03 15:15:32 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

	std::cout << "ClapTrap b after the repair : " <<b.getName() << " " << b.getHitPoints() << " " << b.getEnergyPoints() << " " << b.getAttackDamage() << std::endl << std::endl <<std::endl;


	std::cout << "-----SCAVTRAP TEST-----" << std::endl;

	ScavTrap	scavA("Jack Jack"); // default constructor with name

	std::cout << "ScavTrap scavA : " << scavA.getName() << " " << scavA.getHitPoints() << " " << scavA.getEnergyPoints() << " " << scavA.getAttackDamage() << std::endl << std::endl;

	ScavTrap	scavB(scavA); // copy constructor

	std::cout << "ScavTrap scavB : " << scavB.getName() << " " << scavB.getHitPoints() << " " << scavB.getEnergyPoints() << " " << scavB.getAttackDamage() << std::endl << std::endl;

	ScavTrap	scavC;	// default constructor without name

	std::cout << "ScavTrap scavC : " << scavC.getName() << " " << scavC.getHitPoints() << " " << scavC.getEnergyPoints() << " " << scavC.getAttackDamage() << std::endl << std::endl;

	ScavTrap	scavD;
	scavD = scavC;	// copy assignment operator

	std::cout << "ScavTrap scavD : " << scavD.getName() << " " << scavD.getHitPoints() << " " << scavD.getEnergyPoints() << " " << scavD.getAttackDamage() << std::endl << std::endl;
	
	scavA.attack("NoName");

	std::cout << "ScavTrap scavA after attack : " << scavA.getName() << " " << scavA.getHitPoints() << " " << scavA.getEnergyPoints() << " " << scavA.getAttackDamage() << std::endl << std::endl;

	scavC.takeDamage(scavA.getAttackDamage());

	std::cout << "ScavTrap scavC after attack : " << scavC.getName() << " " << scavC.getHitPoints() << " " << scavC.getEnergyPoints() << " " << scavC.getAttackDamage() << std::endl << std::endl;

	scavC.beRepaired(scavA.getAttackDamage());

	std::cout << "ScavTrap scavC after repair : " << scavC.getName() << " " << scavC.getHitPoints() << " " << scavC.getEnergyPoints() << " " << scavC.getAttackDamage() << std::endl << std::endl;

	scavC.guardGate();
	scavB.guardGate();

	return (0);
}
