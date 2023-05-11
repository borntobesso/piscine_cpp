/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:02:40 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 15:03:13 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE
# define IMATERIASOURCE

# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
