/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:46:06 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 18:04:22 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &rhs);
		virtual ~Animal();
		Animal	&operator = (const Animal &rhs);

		std::string		getType(void) const;
		void			setType(std::string type);
		virtual void	makeSound(void) const = 0;
};

#endif
