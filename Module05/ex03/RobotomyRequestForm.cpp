/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:09:10 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 13:03:32 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", 72, 45), _target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
: Form("RobotomyRequestForm", 72, 45), _target(rhs._target) {}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &)
{ return (*this); }

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const &) const
{
	std::cout << "DRRRRRRR.......!" << std::endl << std::endl;

	std::srand(std::time(NULL));
	int	randNum = std::rand();

	if (randNum % 2 == 0)
		std::cout << _target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << "Robotomy for " << _target << " FAILED" << std::endl << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const { return (_target); }
