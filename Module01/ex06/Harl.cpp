/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:13:59 by sojung            #+#    #+#             */
/*   Updated: 2022/07/26 14:43:19 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

Index hashStr(std::string &inString)
{
	if (inString == "DEBUG") return DEBUG;
	if (inString == "INFO") return INFO;
	if (inString == "WARNING") return WARNING;
	if (inString == "ERROR") return ERROR;
	return ELSE;
}

void	Harl::complain(std::string level)
{
	switch (hashStr(level))
	{
		case DEBUG:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case INFO:
			this->info();
			this->warning();
			this->error();
			break;
		case WARNING:
			this->warning();
			this->error();
			break;
		case ERROR:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
