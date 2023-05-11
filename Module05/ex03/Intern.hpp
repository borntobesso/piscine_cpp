/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:39:54 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 12:17:41 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:

		Intern();
		Intern(const Intern &rhs);
		Intern &operator = (const Intern &rhs);
		~Intern();

		class	FormNotFoundException : public std::exception
		{
			const char	*what() const throw();
		};

		Form	*makeForm(const std::string &name, const std::string &target);

};

#endif
