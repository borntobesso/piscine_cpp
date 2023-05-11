/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:53:04 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 13:04:03 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("PresidentialPardonForm", 25, 5), _target("") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
: Form("PresidentialPardonForm", 25, 5), _target(rhs._target) {}

PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &)
{ return (*this); }

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const &) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const { return (_target); }
