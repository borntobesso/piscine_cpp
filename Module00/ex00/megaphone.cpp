/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:21:57 by sojung            #+#    #+#             */
/*   Updated: 2022/07/05 19:04:14 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int			i;
	std::string	str;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			//str = static_cast<std::string>(av[i]);
			str = (std::string)av[i];
			for (std::string::iterator it = str.begin(); it != str.end(); ++it)
				 *it = toupper(*it);
			std::cout << str;
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
