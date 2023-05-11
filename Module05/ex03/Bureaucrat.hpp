/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:42:23 by sojung            #+#    #+#             */
/*   Updated: 2022/08/15 17:36:53 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class	Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
		Bureaucrat();

	public:
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat &operator = (const Bureaucrat &rhs);
		~Bureaucrat();

		const std::string	&getName() const;
		unsigned int		getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

		class	GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		void	signForm(Form &form);
		void	executeForm(Form const &form);
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat);

#endif
