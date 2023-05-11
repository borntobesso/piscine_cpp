/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:09:26 by sojung            #+#    #+#             */
/*   Updated: 2022/08/15 18:40:26 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	private:

		const std::string	_target;
		RobotomyRequestForm();

	public:

		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		RobotomyRequestForm	&operator = (const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const &executor) const;
};

#endif
