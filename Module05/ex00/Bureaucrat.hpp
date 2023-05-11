/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:42:23 by sojung            #+#    #+#             */
/*   Updated: 2022/08/11 18:41:20 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

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
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat);

#endif
