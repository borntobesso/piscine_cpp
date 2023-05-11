/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:22:01 by sojung            #+#    #+#             */
/*   Updated: 2022/08/11 19:50:13 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	A("Bernard", 1);
	Bureaucrat	B("Camille", 150);
	Bureaucrat	E("Jack Jack", 50);
	E = A;

	try
	{
		Bureaucrat	C("Clementine", 200); //low exception
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem during construction" << std::endl << std::endl;
	}

	try
	{
		Bureaucrat	D("Axel", 0); //high exception
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem during construction" << std::endl << std::endl;
	}

	try
	{
		A.decrementGrade();
		std::cout << A << std::endl << std::endl;
		B.incrementGrade();
		std::cout << B << std::endl << std::endl;
		A.incrementGrade();
		std::cout << A << std::endl << std::endl;
		A.incrementGrade(); // high exception
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem during incrementation" << std::endl << std::endl;
	}

	try
	{
		B.decrementGrade();
		std::cout << B << std::endl << std::endl;
		B.decrementGrade(); // low exception
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem during decrementation" << std::endl << std::endl;
	}

	try
	{
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << E << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem!" << std::endl << std::endl;
	}

	return (0);
}
