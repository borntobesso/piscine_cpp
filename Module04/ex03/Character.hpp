/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:52:09 by sojung            #+#    #+#             */
/*   Updated: 2022/08/08 16:51:29 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character : public ICharacter
{

	private:
		std::string	_name;
		AMateria	*_inventory[4];
		
	public:
		Character(const std::string name);
		Character(const Character &rhs);
		Character &operator = (const Character &rhs);
		~Character();
		std::string const	&getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif
