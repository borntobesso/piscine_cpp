/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:10:50 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 16:36:55 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &rhs)
: _name(rhs._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
		_inventory[i] = rhs._inventory[i]->clone();
	}
}

Character &Character::operator = (const Character &rhs)
{
	_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
		_inventory[i] = rhs._inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
}

std::string	const	&Character::getName(void) const { return (_name); }

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (_inventory[idx] != NULL)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
