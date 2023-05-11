/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:22:01 by sojung            #+#    #+#             */
/*   Updated: 2022/08/15 14:30:39 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	A("Bernard", 1);
	Bureaucrat	B("Sousou", 33);
	Bureaucrat	C("Jack-Jack", 120);

	Form	FA("Visa", 50, 50);
	Form	FB("TLS", 20, 20);
	try
	{
		Form	FC("Fiction", 0, 13);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on 'Fiction' Form creation" << std::endl << std::endl;
	}
	std::cout << "-----Before signing-----" << std::endl << std::endl;
	std::cout << FA << std::endl << std::endl;
	std::cout << FB << std::endl << std::endl;

	try
	{
		A.signForm(FA);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing Form A" << std::endl << std::endl;
	}

	try
	{
		B.signForm(FA);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing Form A" << std::endl << std::endl;
	}

	try
	{
		C.signForm(FB);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing Form B" << std::endl << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "-----After signing-----" << std::endl << std::endl;
	std::cout << FA << std::endl << std::endl;
	std::cout << FB << std::endl << std::endl;

	return (0);
}
