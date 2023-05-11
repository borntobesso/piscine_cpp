/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:57:58 by sojung            #+#    #+#             */
/*   Updated: 2022/07/11 17:09:27 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	line;

	while (1)
	{
		std::cout << "PhoneBook >> Please enter a command ('ADD' , 'SEARCH' or 'EXIT'): ";
		std::getline (std::cin, line);
		
		if (std::cin.eof())
			exit (1);
		if (line.compare("ADD") == 0)
		{
			if (phoneBook.add() == 1)
				exit (1);
		}
		else if (line.compare("SEARCH") == 0)
		{
			phoneBook.print();
		}
		else if (line.compare("EXIT") == 0)
		{
			std::cout << "The contacts will be destroyed if you exit. Are you sure? (Y/N): ";
			std::getline (std::cin, line);
			if (line[0] == 'y' || line[0] == 'Y')
			{
				std::cout << "Bye bye" << std::endl;
				break ;
			}
		}
		else if (line[0] != '\0')
			std::cout << "Error : unknown command, try again." << std::endl;
	}
	return (0);
}
