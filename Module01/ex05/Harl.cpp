/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:13:59 by sojung            #+#    #+#             */
/*   Updated: 2022/07/26 16:31:51 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::execute(void (Harl::*function)(void))
{
	(this->*function)();
}

Harl::functionPtr Harl::hashStr(std::string level)
{
	if (level == "DEBUG") return &Harl::debug;
	if (level == "INFO") return &Harl::info;
	if (level == "WARNING") return &Harl::warning;
	if (level == "ERROR") return &Harl::error;
	return NULL;
}

void	Harl::complain(std::string level)
{
	functionPtr	functionPtr;

	if ((functionPtr = this->hashStr(level)) != NULL)
		this->execute(functionPtr);
	else
		std::cout << "unknown level of complain!" << std::endl;
}
