/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:39:37 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 14:58:59 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{

	std::cout << "=======BASIC TEST=======" << std::endl << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "=======FULL EXCEPTION TEST=======" << std::endl << std::endl;

	try
	{
		std::cout << "Trying to add in the Span sp..." << std::endl;
		sp.addNumber(100);
	}
	catch (std::exception &e) {}

	Span empty = Span(0);

	try
	{
		std::cout << "Trying to add in the Span of 0 capacity..." << std::endl;
		empty.addNumber(100);
	}
	catch (std::exception &e) {}

	std::cout << std::endl;
	std::cout << "=======NO SPAN EXCEPTION TEST=======" << std::endl << std::endl;
	
	Span	one = Span(3);

	one.addNumber(2);

	try
	{
		std::cout << "Trying to find the shortest range of the Span of 0 capacity..." << std::endl;
		empty.shortestSpan();
	}
	catch (std::exception &e) {}

	try
	{
		std::cout << "Trying to find the longest range of the one-element span..." << std::endl;
		one.longestSpan();
	}
	catch (std::exception &e) {}

	std::cout << std::endl;
	std::cout << "=======RANGE ADD TEST=======" << std::endl << std::endl;

	Span						bigSpan = Span(100000);
	std::vector<int>			v_i;

	for (int i = 0; i < 100000; i++)
		v_i.push_back(i);
	std::vector<int>::iterator	begin_i = v_i.begin();
	std::vector<int>::iterator	end_i = v_i.end();

	try
	{
		std::cout << "Adding with addRange() function to the bigSpan..." << std::endl;
		bigSpan.addNumberRange(begin_i, end_i);
		std::cout << "shortest span of the bigSpan: ";
		std::cout << bigSpan.shortestSpan() << std::endl;
		std::cout << "longest span of the bigSpan: ";
		std::cout << bigSpan.longestSpan() << std::endl;
		std::cout << "Trying to add in the bigSpan which is already full..." << std::endl;
		bigSpan.addNumber(100);
	}
	catch (std::exception &e) {}
	
	std::cout << std::endl;

	return (0);
}
