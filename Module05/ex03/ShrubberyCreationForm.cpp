/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:58:36 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 14:37:29 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", 145, 137), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
: Form("ShrubberyCreationForm", 145, 137), _target(rhs._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &)
{ return (*this); }

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char	*ShrubberyCreationForm::FileOpenException::what(void) const throw()
{
	return ("Problem encountered on file opening");
}

void	ShrubberyCreationForm::execute(Bureaucrat const &) const
{
	try
	{
		std::ofstream	outfile((_target + "_shrubbery").c_str(), std::ofstream::app);
		if (outfile.rdstate() & std::ofstream::failbit)
			throw (ShrubberyCreationForm::FileOpenException());
	
		outfile << "               ,@@@@@@@," << std::endl;
		outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888.88/8o" << std::endl;
		outfile << "   ,%&|%&&%&&%,@@@@@@/@@@88*88888/88'" << std::endl;
		outfile << "   %&&%&%&/%&&%@@@@/ /@@@88888|88888'" << std::endl;
		outfile << "   %&&%/ %&%%&&@@| V /@@' `88.8 `/88'" << std::endl;
		outfile << "   `&%| ` /%&'    |.|        | '|8'" << std::endl;
		outfile << "       |o|        | |         | |" << std::endl;
		outfile << "       |o|        | |         | |" << std::endl;
		outfile << "jgs ../ ._.//_/__/  ,._//__../.  ._//__/_" << std::endl;

		std::cout << "a file has been created" << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		throw ;
	}
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}
