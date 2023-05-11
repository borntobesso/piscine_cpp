/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:59:37 by sojung            #+#    #+#             */
/*   Updated: 2022/08/03 15:10:04 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &rhs);
		~ScavTrap();
		ScavTrap	&operator = (const ScavTrap &rhs);

		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif
