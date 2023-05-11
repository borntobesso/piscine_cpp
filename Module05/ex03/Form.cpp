/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:06:23 by sojung            #+#    #+#             */
/*   Updated: 2022/08/15 18:18:49 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
: _name(""), _signed(false), _signGrade(1), _execGrade(1) {}

Form::Form(std::string name, const unsigned int signGrade, const unsigned int execGrade)
try : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw(Form::GradeTooLowException());
}
catch (std::exception &e)
{
	std::cerr << e.what() << std::endl;
}

Form::Form(const Form &rhs)
: _name(rhs._name), _signed(rhs._signed), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade)
{}

Form &Form::operator = (const Form &rhs)
{
	_signed = rhs._signed;
	return (*this);
}

Form::~Form(){}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high for the form");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low for the form");
}

const char	*Form::SignedException::what() const throw()
{
	return ("Form already signed");
}

const char	*Form::NotSignedException::what() const throw()
{
	return ("Form not signed"); 
}

const std::string	&Form::getName(void) const { return (_name); }

bool	Form::getSigned(void) const { return (_signed); }

unsigned int	Form::getSignGrade(void) const { return (_signGrade); }

unsigned int	Form::getExecGrade(void) const { return (_execGrade); }

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > _signGrade)
			throw (Form::GradeTooLowException());
		else if (_signed == true)
			throw (Form::SignedException());
		else
			_signed = !_signed;
	}
	catch (std::exception &e)
	{
		throw ;
	}
}

void	Form::checkAndExec(Bureaucrat const &executor) const
{
	try
	{
		if (_signed == false)
			throw (Form::NotSignedException());
		else if (executor.getGrade() > _execGrade)
			throw (Form::GradeTooLowException());
		else
			execute(executor);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw ;
	}
}

std::ostream	&operator << (std::ostream &os, const Form &form)
{
	os << "Form name :\t\t\t" << form.getName() << std::endl;
	os << "Signed :\t\t\t" << form.getSigned() << std::endl;
	os << "Required grade for sign :\t" << form.getSignGrade() << std::endl;
	os << "Required grade for execute :\t" << form.getExecGrade();

	return (os);
}
