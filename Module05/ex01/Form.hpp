/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:57:17 by sojung            #+#    #+#             */
/*   Updated: 2022/08/15 14:42:07 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class	Bureaucrat;

class	Form
{
	private:

		const std::string	_name;
		bool				_signed;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
		Form();

	public:

		Form(const std::string name, const unsigned int signGrade, const unsigned int execGrade);
		Form(const Form &rhs);
		Form &operator = (const Form &rhs);
		~Form();

		class	GradeTooHighException : public std::exception
		{
			const char	*what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			const char	*what() const throw();
		};

		class	SignedException : public std::exception
		{
			const char	*what() const throw();
		};

		const std::string	&getName() const;
		bool				getSigned() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecGrade() const;

		void	beSigned(const Bureaucrat &bureaucrat);
};

std::ostream	&operator << (std::ostream &os, const Form &form);

#endif
