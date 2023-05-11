/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:59:08 by sojung            #+#    #+#             */
/*   Updated: 2022/07/26 10:02:28 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl Harl;

	if (ac != 2)
	{
		std::cout << "[ Need a log level as parameter ! ]" << std::endl;
		return (1);
	}
	else
		Harl.complain(av[1]);
	return (0);
}
