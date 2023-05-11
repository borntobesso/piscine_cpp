/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:06:13 by sojung            #+#    #+#             */
/*   Updated: 2022/08/18 23:04:31 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class	Base
{
	public:

		virtual ~Base() {};
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
