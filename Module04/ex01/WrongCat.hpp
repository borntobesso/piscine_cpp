/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:59:56 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 13:17:19 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(const WrongCat &rhs);
		~WrongCat();
		WrongCat &operator = (const WrongCat &rhs);

		void	makeSound(void) const;
};

#endif
