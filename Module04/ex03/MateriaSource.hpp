/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:02:40 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 17:58:31 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		AMateria	*learnInventory[4];

		MateriaSource();
		MateriaSource(const MateriaSource &rhs);
		MateriaSource &operator = (const MateriaSource &rhs);
		~MateriaSource();
		void	learnMateria(AMateria *materia);
		AMateria *createMateria(std::string const &type);
};

#endif
