/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:22:01 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 13:00:04 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	Form	*rrf;
	Form	*scf;
	Form	*ppf;


	std::cout << "----------Forms creation test----------" << std::endl <<std::endl;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		std::cout << "Target : " << rrf->getTarget() << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "robotomy Creation Failed!" << std::endl << std::endl;
	}

	try
	{
		scf = someRandomIntern.makeForm("Scccrub Creation", "Sou");
		std::cout << *scf << std::endl;
		std::cout << "Target : " << scf->getTarget() << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Scccrub Creation Failed!" << std::endl << std::endl;
	}

	try
	{
		scf = someRandomIntern.makeForm("SHRUBBERY CREATION FORM", "Sou");
		std::cout << *scf << std::endl;
		std::cout << "Target : " << scf->getTarget() << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "SHRUBBERY Creation Failed!" << std::endl << std::endl;
	}

	try
	{
		ppf = someRandomIntern.makeForm("Presidential Pardon Form", "Gou");
		std::cout << *ppf << std::endl;
		std::cout << "Target : " << ppf->getTarget() << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Presidential Pardon Creation Failed!" << std::endl << std::endl;
	}

	std::cout << "----------Forms signing test----------" << std::endl << std::endl;

	Bureaucrat	A("Adele", 1);
	Bureaucrat	B("Bernard", 147);

	std::cout << "\t---Fail test---" << std::endl << std::endl;

	try
	{
		B.signForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cout << B.getName() << " failed to sign the form " << rrf->getTarget() << std::endl;
	}

	try
	{
		B.signForm(*scf);
	}
	catch (std::exception &e)
	{
		std::cout << B.getName() << " failed to sign the form " << scf->getTarget() << std::endl;
	}

	try
	{
		B.signForm(*ppf);
	}
	catch (std::exception &e)
	{
		std::cout << B.getName() << " failed to sign the form " << ppf->getTarget() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\t---Success test---" << std::endl << std::endl;
	
	try
	{
		A.signForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cout << A.getName() << " failed to sign the form " << rrf->getTarget() << std::endl;
	}

	try
	{
		A.signForm(*scf);
	}
	catch (std::exception &e)
	{
		std::cout << A.getName() << " failed to sign the form " << scf->getTarget() << std::endl;
	}

	try
	{
		A.signForm(*ppf);
	}
	catch (std::exception &e)
	{
		std::cout << A.getName() << " failed to sign the form " << ppf->getTarget() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----------Forms after signed----------" << std::endl << std::endl;

	std::cout << *rrf << std::endl;
	std::cout << "Target : " << rrf->getTarget() << std::endl << std::endl;

	std::cout << *scf << std::endl;
	std::cout << "Target : " << scf->getTarget() << std::endl << std::endl;

	std::cout << *ppf << std::endl;
	std::cout << "Target : " << ppf->getTarget() << std::endl << std::endl;


	std::cout << "----------Forms execute test----------" << std::endl << std::endl;

	std::cout << "\t---Fail test---" << std::endl << std::endl;

	try
	{
		B.executeForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cout << B.getName() << " failed to execute the form " << rrf->getTarget() << std::endl << std::endl;
	}

	try
	{
		B.executeForm(*scf);
	}
	catch (std::exception &e)
	{
		std::cout << B.getName() << " failed to excute the form " << scf->getTarget() << std::endl << std::endl;
	}

	try
	{
		B.executeForm(*ppf);
	}
	catch (std::exception &e)
	{
		std::cout << B.getName() << " failed to execute the form " << ppf->getTarget() << std::endl << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\t---Success test---" << std::endl << std::endl;
	
	try
	{
		A.executeForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cout << A.getName() << " failed to execute the form " << rrf->getTarget() << std::endl;
	}

	try
	{
		A.executeForm(*scf);
	}
	catch (std::exception &e)
	{
		std::cout << A.getName() << " failed to execute the form " << scf->getTarget() << std::endl;
	}

	try
	{
		A.executeForm(*ppf);
	}
	catch (std::exception &e)
	{
		std::cout << A.getName() << " failed to execute the form " << ppf->getTarget() << std::endl;
	}

	std::cout << std::endl;

	delete rrf;
	delete scf;
	delete ppf;

	return (0);
}
