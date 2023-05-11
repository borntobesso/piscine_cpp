/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:56:07 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 12:59:11 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &rhs);
		~WrongAnimal();
		WrongAnimal	&operator = (const WrongAnimal &rhs);

		std::string		getType(void) const;
		void			setType(std::string type);
		void			makeSound(void) const;
};

#endif
