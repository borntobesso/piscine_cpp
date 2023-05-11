/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:37:50 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 16:50:37 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &rhs);
		~Cure();
		Cure &operator = (const Cure &rhs);

		AMateria	*clone() const;
		void		use(ICharacter &target);
		void		setType(void);
};

#endif
