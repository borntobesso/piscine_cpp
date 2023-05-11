/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:30:08 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 17:30:45 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:

		Brain	*_brain;

	public:

		Cat();
		Cat(const Cat &rhs);
		virtual ~Cat();
		Cat &operator = (const Cat &rhs);

		void	makeSound(void) const;
};

#endif
