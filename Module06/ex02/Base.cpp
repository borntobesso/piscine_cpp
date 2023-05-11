/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:40:14 by sojung            #+#    #+#             */
/*   Updated: 2022/08/18 23:34:40 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	std::srand(std::time(NULL));
	int	randNum = std::rand();

	if (randNum % 3 == 0)
		return (new A);
	else if (randNum % 3 == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "The actual type is A" << std::endl;
	else if (b != NULL)
		std::cout << "The actual type is B" << std::endl;
	else if (c != NULL)
		std::cout << "The actual type is C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "The actual type is A" << std::endl;
	}
	catch (std::exception &) {}

	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "The actual type is B" << std::endl;
	}
	catch (std::exception &) {}
	
	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "The actual type is C" << std::endl;
	}
	catch (std::exception &) {}
}
