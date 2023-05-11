/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:50:37 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 18:07:42 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"


class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &rhs);
		AMateria &operator = (const AMateria &rhs);
		virtual ~AMateria();

		std::string const	&getType(void) const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
