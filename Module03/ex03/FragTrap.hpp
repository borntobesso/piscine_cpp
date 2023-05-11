/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:32:06 by sojung            #+#    #+#             */
/*   Updated: 2022/08/04 17:18:34 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &rhs);
		~FragTrap();
		FragTrap &operator = (const FragTrap &rhs);

		void	attack(const std::string &target);
		void	highFivesGuys(void);

		void	setDefaultHitPoints(void);
		void	setDefaultEnergyPoints(void);
		void	setDefaultAttackDamage(void);

};

#endif
