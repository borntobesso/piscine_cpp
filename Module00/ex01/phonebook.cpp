/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:20:59 by sojung            #+#    #+#             */
/*   Updated: 2022/07/11 17:09:23 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	PhoneBook::add(void)
{
	Contact		newContact;
	std::string	input;

	while (1)
	{
		std::cout << "PhoneBook >> First Name : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input.length() == 0)
			std::cout << "Error : can't have empty fields, please try again." << std::endl;
		else
		{
			newContact.setFirstName(input);
			break ;
		}
	}
	while (1)
	{
		std::cout << "PhoneBook >> Last Name : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input.length() == 0)
			std::cout << "Error : can't have empty fields, please try again." << std::endl;
		else
		{
			newContact.setLastName(input);
			break ;
		}
	}
	while (1)
	{
		std::cout << "PhoneBook >> Nickname : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input.length() == 0)
			std::cout << "Error : can't have empty fields, please try again." << std::endl;
		else
		{
			newContact.setNickName(input);
			break ;
		}
	}
	while (1)
	{
		std::cout << "PhoneBook >> Phone Number : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input.length() == 0)
			std::cout << "Error : can't have empty fields, please try again." << std::endl;
		else
		{
			newContact.setPhoneNumber(input);
			break ;
		}
	}
	while (1)
	{
		std::cout << "PhoneBook >> Darkest Secret : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input.length() == 0)
			std::cout << "Error : can't have empty fields, please try again." << std::endl;
		else
		{
			newContact.setSecret(input);
			break ;
		}
	}
	this->_phoneBook[this->nextIndex] = newContact;
	if (this->nextIndex == 7)
		this->nextIndex = 0;
	else
		this->nextIndex++;
	return (0);
}

std::string	newInfo(std::string longInfo)
{
		char	buffer[11];

		longInfo.copy(buffer, 9, 0);
		buffer[9] = '.';
		buffer[10] = '\0';
		return (static_cast<std::string>(buffer));
}

int	getIndex(void)
{
	std::string	str;
	int			index;
	int			i;

	while (1)
	{
		std::cout << "PhoneBook >> enter an index of contact to display : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (-1);
		if (str.length() > 2)
			std::cout << "Error : index out of range" << std::endl;
		else
		{
			index = 0;
			if (str[0] != '\0')
			{
				i = 0;
				while (str[i])
				{
					if (str[i] < '0' || str[i] > '9')
					{
						std::cout << "Error : only digits required" << std::endl;
						break;
					}
					else
					{
						index = index * 10 + (str[i] - '0');
						i++;
					}
				}
				if (str[i] == '\0')
					return (index);
			}
		}
	}
}

void	PhoneBook::print(void)
{
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::string	info;
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i << std::setw(1) << "|";
		info = this->_phoneBook[i].getFirstName();
		if (info.length() > 9)
			info = newInfo(info);
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << info << std::setw(1) << "|";
		info = this->_phoneBook[i].getLastName();
		if (info.length() > 9)
			info = newInfo(info);
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << info << std::setw(1) << "|";
		info = this->_phoneBook[i].getNickName();
		if (info.length() > 9)
			info = newInfo(info);
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << info << std::setw(1) << "|" << std::endl;
	}
	std::cout << std::endl;
	indexPrint(getIndex());
}

void	PhoneBook::indexPrint (int index)
{
	if (index == -1)
		exit (1);
	if (index > 7)
		std::cout << "Error : index out of range" << std::endl;
	else
	{
		if (this->_phoneBook[index].getFirstName().length() == 0)
			std::cout << "Empty contact" << std::endl;
		else
		{
			std::cout << std::endl;
			std::cout << "Contact n."<< index << std::endl << std::endl;
			std::cout << std::setw(20) << "First Name:\t" << _phoneBook[index].getFirstName() << std::endl;
			std::cout << std::setw(20) << "Last Name:\t" << _phoneBook[index].getLastName() << std::endl;
			std::cout << std::setw(20) << "Nickname:\t" << _phoneBook[index].getNickName() << std::endl;
			std::cout << std::setw(20) << "Phone Number:\t" << _phoneBook[index].getPhoneNumber() << std::endl;
			std::cout << std::setw(20) << "Darkest Secret:\t" << _phoneBook[index].getSecret() << std::endl << std::endl;
		}
	}
}
