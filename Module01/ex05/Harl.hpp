/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:10:20 by sojung            #+#    #+#             */
/*   Updated: 2022/07/26 16:27:00 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	execute(void (Harl::*function)(void));

public:
	Harl();
	~Harl();

	typedef void (Harl::*functionPtr)(void);
	void		complain(std::string level);
	functionPtr	hashStr(std::string level);
};


#endif
