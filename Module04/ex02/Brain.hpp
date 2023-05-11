/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:50:27 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 17:51:57 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private :

		std::string	_ideas[100];

	public :

		Brain();
		Brain(const Brain &rhs);
		Brain &operator = (const Brain &rhs);
		~Brain();

		void				setIdeas(unsigned i, const std::string idea);
		const std::string	&getIdeas(unsigned i) const;
};

#endif
