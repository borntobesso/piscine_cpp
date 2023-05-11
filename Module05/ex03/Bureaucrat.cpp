/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:43:23 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 12:59:08 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: _name(""), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
try : _name(name), _grade(grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}
catch (std::exception &e)
{
	std::cerr << e.what() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
: _name(rhs._name), _grade(rhs._grade) {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &rhs)
{
	_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string	&Bureaucrat::getName(void) const { return (_name); }

unsigned int	Bureaucrat::getGrade(void) const { return (_grade); }

void	Bureaucrat::incrementGrade(void)
{
	try
	{
		if (_grade - 1 < 1)
			throw (Bureaucrat::GradeTooHighException());
		_grade--;
		std::cout << "Bureaucrat " << _name << "'s grade incremented" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw ;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		if (_grade  + 1 > 150)
			throw (Bureaucrat::GradeTooLowException());
		_grade++;
		std::cout << "Bureaucrat " << _name << "'s grade decremented" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw ;
	}
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

std::ostream	&operator << (std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (os);
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.Form::beSigned(*this);
		std::cout << _name << " signed " << form.Form::getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " couldn't sign " << form.Form::getName() << " because : " << e.what() << std::endl;
		throw ;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.checkAndExec(*this);
		std::cout << _name << " executed " << form.getName() << std::endl <<std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " couldn't execute " << form.getName() << std::endl;
		throw ;
	}
}
