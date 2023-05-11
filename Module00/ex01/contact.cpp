/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:05:11 by sojung            #+#    #+#             */
/*   Updated: 2022/07/08 14:48:24 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}

std::string	Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void)
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::getSecret(void)
{
	return (this->_secret);
}
