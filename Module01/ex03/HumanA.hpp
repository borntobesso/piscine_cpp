/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:40:48 by sojung            #+#    #+#             */
/*   Updated: 2022/07/25 12:10:00 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"
# include <new>

class HumanA
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack(void);
};

#endif
