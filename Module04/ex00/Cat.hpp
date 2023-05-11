/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:30:08 by sojung            #+#    #+#             */
/*   Updated: 2022/08/04 18:46:08 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:

		Cat();
		Cat(const Cat &rhs);
		~Cat();
		Cat &operator = (const Cat &rhs);

		void	makeSound(void) const;
};

#endif
