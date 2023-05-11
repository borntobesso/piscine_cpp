/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:22:01 by sojung            #+#    #+#             */
/*   Updated: 2022/08/15 18:16:01 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	A("Bernard", 1);
	Bureaucrat	B("Sousou", 33);
	Bureaucrat	C("Jack-Jack", 150);

	ShrubberyCreationForm	shrub("here");
	RobotomyRequestForm		robot("cooking");
	PresidentialPardonForm	pardon("Sousou the guilty");

/////////////////////////////////////////////////////////////////////////////////	
	std::cout << "-----Before signing-----" << std::endl << std::endl;
	std::cout << shrub << std::endl << std::endl;
	std::cout << robot << std::endl << std::endl;
	std::cout << pardon << std::endl << std::endl;

/////////////////////////////////////////////////////////////////////////////////	
	std::cout << "-----No signed form execution test-----" << std::endl << std::endl;
	
	try
	{
		A.executeForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing ShrubberyCreationForm" << std::endl << std::endl;
	}

	try
	{
		A.executeForm(robot);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing RobotomyRequestForm" << std::endl << std::endl;
	}

	try
	{
		A.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing PresidentialPardonForm" << std::endl << std::endl;
	}

/////////////////////////////////////////////////////////////////////////////////	
	std::cout << "-----Sign test-----" << std::endl << std::endl;

	try
	{
		C.signForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing ShrubberyCreationForm" << std::endl << std::endl;
	}

	try
	{
		A.signForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing ShrubberyCreationForm" << std::endl << std::endl;
	}

	try
	{
		C.signForm(robot);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing RobotomyRequestForm" << std::endl << std::endl;
	}

	try
	{
		A.signForm(robot);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing RobotomyRequestForm" << std::endl << std::endl;
	}

	try
	{
		B.signForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing PresidentialPardonForm" << std::endl << std::endl;
	}
	
	try
	{
		A.signForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on signing PresidentialPardonForm" << std::endl << std::endl;
	}

/////////////////////////////////////////////////////////////////////////////////	
	std::cout << std::endl;
	std::cout << "-----After signing-----" << std::endl << std::endl;
	std::cout << shrub << std::endl << std::endl;
	std::cout << robot << std::endl << std::endl;
	std::cout << pardon << std::endl << std::endl;

/////////////////////////////////////////////////////////////////////////////////	
	std::cout << "-----Signed form execution test-----" << std::endl << std::endl;

	try
	{
		A.executeForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing ShrubberyCreationForm" << std::endl << std::endl;
	}

	try
	{
		C.executeForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing ShrubberyCreationForm" << std::endl << std::endl;
	}

	try
	{
		A.executeForm(robot);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing RobotomyRequestForm" << std::endl << std::endl;
	}

	try
	{
		C.executeForm(robot);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing RobotomyRequestForm" << std::endl << std::endl;
	}


	try
	{
		A.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing PresidentialPardonForm" << std::endl << std::endl;
	}
	
	try
	{
		B.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << "Problem encountered on executing PresidentialPardonForm" << std::endl << std::endl;
	}


	return (0);
}
