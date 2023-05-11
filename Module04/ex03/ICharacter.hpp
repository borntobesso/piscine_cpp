/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:52:09 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 16:47:06 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class	AMateria;

class	ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const	&getName() const = 0;
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter &target) = 0;
};

#endif
