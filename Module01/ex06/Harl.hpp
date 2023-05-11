/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:10:20 by sojung            #+#    #+#             */
/*   Updated: 2022/07/26 14:42:28 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

enum	Index { DEBUG, INFO, WARNING, ERROR, ELSE };

class	Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif
