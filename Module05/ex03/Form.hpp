/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:57:17 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 12:21:49 by sojung           ###   ########.fr       */
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
		virtual ~Form();

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

		class	NotSignedException : public std::exception
		{
			const char *what() const throw();
		};

		const std::string		&getName() const;
		bool					getSigned() const;
		unsigned int			getSignGrade() const;
		unsigned int			getExecGrade() const;
		virtual std::string		getTarget() const = 0;

		void			beSigned(Bureaucrat const &bureaucrat);
		void			checkAndExec(Bureaucrat const &executor) const;
		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator << (std::ostream &os, const Form &form);

#endif
