/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:36 by sojung            #+#    #+#             */
/*   Updated: 2022/07/25 12:10:04 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif
