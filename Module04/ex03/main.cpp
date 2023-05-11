/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:29:11 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 18:15:54 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	std::cout << "Unequip the Ice and re-equiping the Cure...." << std::endl;
	std::cout << "Healing Jack..." << std::endl << std::endl;

	me->unequip(0);
	me->equip(tmp);

	ICharacter* jack = new Character("JackJack");

	me->use(0, *jack);
	me->use(1, *jack);

	std::cout << std::endl;
	std::cout << "Unequip all the materia and trying to use them in vain... " << std::endl << std::endl;

	me->unequip(0);
	me->unequip(1);

	me->use(0, *jack);
	me->use(1, *jack);

	delete jack;
	delete bob;
	delete me;
	delete src;

	return 0;
}
