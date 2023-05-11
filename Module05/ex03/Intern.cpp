/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:39:49 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 12:24:35 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &) {}

Intern	&Intern::operator = (const Intern &) { return (*this); }

Intern::~Intern() {}

const char	*Intern::FormNotFoundException::what() const throw()
{
	return ("Cannot found the demanded form");
}

int	findForm(const std::string &name)
{
	const std::string	formList[3] = { "shrubbery", "robotomy", "president" };

	std::string	copy(name);
	for (size_t i = 0; i < copy.length(); i++)
		copy[i] = tolower(copy[i]);

	size_t	found;
	try
	{
		for (int i = 0; i < 3; i++)
		{
			found = copy.find(formList[i]);
			if (found != std::string::npos)
				return (i);
		}
		throw (Intern::FormNotFoundException());
	}
	catch (std::exception &e) { throw ; }
}

Form	*ShrubberyCreator(const std::string &target) { return (new ShrubberyCreationForm(target)); }

Form	*RobotomyCreator(const std::string &target) { return (new RobotomyRequestForm(target)); }

Form	*PresidentialCreator(const std::string &target) { return (new PresidentialPardonForm(target)); }

Form	*Intern::makeForm(const std::string &name, const std::string &target)
{
	typedef	Form *(*fPtr)(const std::string &);

	fPtr	formList[3] = { ShrubberyCreator, RobotomyCreator, PresidentialCreator };
	
	try
	{
		int	found = findForm(name);
		Form	*result = (*formList[found])(target);

		std::cout << "Intern creates " << result->getName() << std::endl;

		return (result);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw ;
		return (NULL);
	}
}
