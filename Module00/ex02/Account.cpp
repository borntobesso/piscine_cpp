/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:18:09 by sojung            #+#    #+#             */
/*   Updated: 2022/07/11 15:59:57 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals= 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += this->_amount;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

Account::Account(void)
{
	this->_amount = 0;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += this->_amount;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{ 
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	std::time_t rawtime;
	struct tm *	timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer;
	/*std::cout << "[" << std::put_time(ptm, %Y) << std::put_time(ptm, %m) << std::put_time(ptm, %d) << "_" << std::put_time(ptm, %H) << std::put_time(ptm, %M) << std::put_time(ptm, %S) << "]";*/
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << checkAmount();
	if (checkAmount() - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);
	}
}
