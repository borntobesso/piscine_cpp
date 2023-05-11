/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:06:30 by sojung            #+#    #+#             */
/*   Updated: 2022/07/28 10:21:41 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "[ Three arguments needed : 1) input file 2) string to replace 3) string to replace to ]" << std::endl;
		return (1);
	}
	else
	{
		std::string args[3];
		for (int i = 0; i < 3; i++)
			args[i] = (std::string)av[i + 1];
		Replace replace(args);
		if (replace.argsValidCheck() == 1)
			return (1);
		else if (replace.replacer())
			return (1);	
	}
	return (0);
}
