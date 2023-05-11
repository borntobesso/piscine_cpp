/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:58:46 by sojung            #+#    #+#             */
/*   Updated: 2022/08/17 14:37:11 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
		
		const std::string	_target;
		ShrubberyCreationForm();

	public:

		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &);
		~ShrubberyCreationForm();

		class	FileOpenException : public std::exception
		{
			const char	*what() const throw();
		};

		void		execute(Bureaucrat const &executor) const;
		std::string	getTarget() const;
};

#endif
