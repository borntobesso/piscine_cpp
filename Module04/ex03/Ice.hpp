/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:31:41 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 16:50:22 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &rhs);
		~Ice();
		Ice &operator = (const Ice &rhs);

		AMateria	*clone() const;
		void		use(ICharacter &target);
		void		setType(void);
};

#endif
