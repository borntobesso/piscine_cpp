/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:53:10 by sojung            #+#    #+#             */
/*   Updated: 2022/08/15 18:40:32 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private:

		const std::string	_target;
		PresidentialPardonForm();

	public:

		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		PresidentialPardonForm	&operator = (const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const &executor) const;

};

#endif
