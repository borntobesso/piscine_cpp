/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:11:33 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 18:03:24 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		learnInventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
		learnInventory[i] = rhs.learnInventory[i];
}

MateriaSource &MateriaSource::operator = (const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
		learnInventory[i] = rhs.learnInventory[i];
	return (*this);
}

MateriaSource::~MateriaSource() {}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
		if (learnInventory[i] == NULL)
		{
			learnInventory[i] = materia;
			return ;
		}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (learnInventory[i] != NULL && learnInventory[i]->getType() == type)
			return (learnInventory[i]);
	return (0);
}
