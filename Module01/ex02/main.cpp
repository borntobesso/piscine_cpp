/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:18:47 by sojung            #+#    #+#             */
/*   Updated: 2022/07/23 11:03:44 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string myString = "HI THIS IS BRAIN";
	std::string	*stringPTR = &myString;
	std::string &stringREF = myString;

	std::cout << "The memory address of the string variable :\t";
	std::cout << &myString << std::endl;
	std::cout << "The memory address held by stringPTR :\t\t";
	std::cout << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF :\t\t";
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << "The value of the string variable :\t";
	std::cout << myString << std::endl;
	std::cout << "The value pointed to by stringPTR :\t";
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF :\t";
	std::cout << stringREF << std::endl << std::endl;

	return (0);
}
