/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:26:51 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 12:34:14 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	public:

		Dog();
		Dog(const Dog &rhs);
		~Dog();
		Dog &operator = (const Dog &rhs);

		void	makeSound(void) const;
};

#endif
