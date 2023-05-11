/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 23:06:34 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 14:51:57 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	
	std::cout << "=======VECTOR TEST=======" << std::endl << std::endl;
	std::vector<int>					v;
	std::vector<int>::const_iterator	v_i;

	for (int i = 0; i < 10; i++)
		v.push_back(i);
	std::cout << "vector v = { ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << v[i];
		if (i < 9)
			std::cout << " ";
	}
	std::cout << "}" << std::endl;

	v_i = easyfind(v, 3);
	if (v_i != v.end())
		std::cout << "Element 3 found : " << *v_i << std::endl;
	else
		std::cout << "Element 3 not found" << std::endl;

	v_i = easyfind(v, 11);
	if (v_i != v.end())
		std::cout << "Element 11 found : " << *v_i << std::endl;
	else
		std::cout << "Element 11 not found" << std::endl;


	std::cout << std::endl << std::endl;
	std::cout << "=======LIST TEST=======" << std::endl << std::endl;
	std::list<int>					l;
	std::list<int>::const_iterator	l_i;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			l.push_back(i);
		else
			l.push_front(i);
	}
	std::list<int>::const_iterator	l_end = l.end();
	std::cout << "list l = { ";
	for (l_i = l.begin(); l_i != l_end; l_i++)
		std::cout << *l_i << " ";
	std::cout << "}" << std::endl;

	l_i = easyfind(l, 3);
	if (l_i != l.end())
		std::cout << "Element 3 found : " << *l_i << std::endl;
	else
		std::cout << "Element 3 not found" << std::endl;

	l_i = easyfind(l, 11);
	if (l_i != l.end())
		std::cout << "Element 11 found : " << *l_i << std::endl;
	else
		std::cout << "Element 11 not found" << std::endl;


	std::cout << std::endl << std::endl;
	std::cout << "=======DEQUE TEST=======" << std::endl << std::endl;
	std::deque<int>					d;
	std::deque<int>::const_iterator	d_i;

	for (int i = 0; i < 10; i++)
		d.insert(d.end(), i);
	std::cout << "deque d = { ";
	for (d_i = d.begin(); d_i != d.end(); d_i++)
		std::cout << *d_i << " ";
	std::cout << "}" << std::endl;

	d_i = easyfind(d, 3);
	if (d_i != d.end())
		std::cout << "Element 3 found : " << *d_i << std::endl;
	else
		std::cout << "Element 3 not found" << std::endl;

	d_i = easyfind(d, 11);
	if (d_i != d.end())
		std::cout << "Element 11 found : " << *d_i << std::endl;
	else
		std::cout << "Element 11 not found" << std::endl << std::endl;


	return (0);
}
