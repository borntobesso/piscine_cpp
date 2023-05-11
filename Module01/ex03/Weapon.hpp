/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:49:31 by sojung            #+#    #+#             */
/*   Updated: 2022/07/25 12:10:02 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(const std::string newType);
	~Weapon();
	const std::string	getType(void);
	void				setType(const std::string newType);
};

#endif
