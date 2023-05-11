/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:49:38 by sojung            #+#    #+#             */
/*   Updated: 2022/08/04 17:11:37 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
/*	ClapTrap a("Sousou");
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
	
	scavA.ScavTrap::attack("NoName");

	std::cout << "ScavTrap scavA after attack : " << scavA.getName() << " " << scavA.getHitPoints() << " " << scavA.getEnergyPoints() << " " << scavA.getAttackDamage() << std::endl << std::endl;

	scavC.takeDamage(scavA.getAttackDamage());

	std::cout << "ScavTrap scavC after attack : " << scavC.getName() << " " << scavC.getHitPoints() << " " << scavC.getEnergyPoints() << " " << scavC.getAttackDamage() << std::endl << std::endl;

	scavC.beRepaired(scavA.getAttackDamage());

	std::cout << "ScavTrap scavC after repair : " << scavC.getName() << " " << scavC.getHitPoints() << " " << scavC.getEnergyPoints() << " " << scavC.getAttackDamage() << std::endl << std::endl;

	scavC.guardGate();
	scavB.guardGate();


	std::cout << std::endl << std::endl << std::endl;
	std::cout << "-----FRAGTRAP TEST-----" << std::endl;

	FragTrap	fragA("Raccoon"); // default constructor with name

	std::cout << "FragTrap fragA : " << fragA.getName() << " " << fragA.getHitPoints() << " " << fragA.getEnergyPoints() << " " << fragA.getAttackDamage() << std::endl << std::endl;

	FragTrap	fragB(fragA); // copy constructor

	std::cout << "FragTrap fragB : " << fragB.getName() << " " << fragB.getHitPoints() << " " << fragB.getEnergyPoints() << " " << fragB.getAttackDamage() << std::endl << std::endl;

	FragTrap	fragC;	// default constructor without name

	std::cout << "FrapTrap fragC : " << fragC.getName() << " " << fragC.getHitPoints() << " " << fragC.getEnergyPoints() << " " << fragC.getAttackDamage() << std::endl << std::endl;

	FragTrap	fragD;
	fragD = fragC;	// copy assignment operator

	std::cout << "FragTrap fragD : " << fragD.getName() << " " << fragD.getHitPoints() << " " << fragD.getEnergyPoints() << " " << fragD.getAttackDamage() << std::endl << std::endl;
	
	fragA.FragTrap::attack("NoName");

	std::cout << "FragTrap fragA after attack : " << fragA.getName() << " " << fragA.getHitPoints() << " " << fragA.getEnergyPoints() << " " << fragA.getAttackDamage() << std::endl << std::endl;

	fragC.takeDamage(fragA.getAttackDamage());

	std::cout << "FragTrap fragC after attack : " << fragC.getName() << " " << fragC.getHitPoints() << " " << fragC.getEnergyPoints() << " " << fragC.getAttackDamage() << std::endl << std::endl;

	fragC.beRepaired(fragA.getAttackDamage());

	std::cout << "FragTrap fragC after repair : " << fragC.getName() << " " << fragC.getHitPoints() << " " << fragC.getEnergyPoints() << " " << fragC.getAttackDamage() << std::endl << std::endl;

	fragC.highFivesGuys();
	fragB.highFivesGuys();*/

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "-----DIAMONDTRAP TEST-----" << std::endl;

	DiamondTrap	DiaA("Carbon");

	std::cout << "DiamondTrap DiaA : " << DiaA.getName() << " " << DiaA.getHitPoints() << " " << DiaA.getEnergyPoints() << " " << DiaA.getAttackDamage() << std::endl << std::endl;

	DiamondTrap	DiaB(DiaA);

	std::cout << "DiamondTrap DiaB : " << DiaB.getName() << " " << DiaB.getHitPoints() << " " << DiaB.getEnergyPoints() << " " << DiaB.getAttackDamage() << std::endl << std::endl;

	DiamondTrap	DiaC("Bortz");

	std::cout << "DiamondTrap DiaC : " << DiaC.getName() << " " << DiaC.getHitPoints() << " " << DiaC.getEnergyPoints() << " " << DiaC.getAttackDamage() << std::endl << std::endl;	

	DiaB = DiaC;

	std::cout << "DiamondTrap DiaB : " << DiaB.getName() << " " << DiaB.getHitPoints() << " " << DiaB.getEnergyPoints() << " " << DiaB.getAttackDamage() << std::endl << std::endl;	
	
	DiaA.attack("Bortz");

	std::cout << "DiamondTrap DiaA after attack : " << DiaA.getName() << " " << DiaA.getHitPoints() << " " << DiaA.getEnergyPoints() << " " << DiaA.getAttackDamage() << std::endl << std::endl;

	DiaB.takeDamage(DiaA.getAttackDamage());

	std::cout << "DiamondTrap DiaB after attack : " << DiaB.getName() << " " << DiaB.getHitPoints() << " " << DiaB.getEnergyPoints() << " " << DiaB.getAttackDamage() << std::endl << std::endl;

	DiaB.beRepaired(DiaB.getAttackDamage());

	std::cout << "DiamondTrap DiaB after repair : " << DiaB.getName() << " " << DiaB.getHitPoints() << " " << DiaB.getEnergyPoints() << " " << DiaB.getAttackDamage() << std::endl << std::endl;

	DiaA.highFivesGuys();
	DiaC.highFivesGuys();
	DiaA.guardGate();
	DiaC.guardGate();

	DiaA.whoAmI();
	DiaC.whoAmI();

	return (0);
}
