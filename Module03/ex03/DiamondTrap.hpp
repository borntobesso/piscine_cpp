/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:17:09 by sojung            #+#    #+#             */
/*   Updated: 2022/08/04 17:18:19 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:

		std::string	_name;
	
	public:

		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &rhs);
		DiamondTrap &operator = (const DiamondTrap &rhs);
		~DiamondTrap();

		using	ScavTrap::attack;
	
		std::string	getName() const;
		void		whoAmI();
};

#endif
