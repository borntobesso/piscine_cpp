/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:19:07 by sojung            #+#    #+#             */
/*   Updated: 2022/07/11 17:09:32 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <climits>
# include <cstdio>
# include <cstdlib>

class	Contact
{

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string _secret;

public:
	Contact(){};
	~Contact(){};
	void		setFirstName(std::string firstName);
	void		setLastName(std::string lastName);
	void		setNickName(std::string nickName);
	void		setPhoneNumber(std::string phoneNumber);
	void		setSecret(std::string secret);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getSecret(void);
};

class	PhoneBook
{

private:
	Contact _phoneBook[8];

public:
	PhoneBook()
	{
		nextIndex = 0;
	};
	~PhoneBook(){};

	int		nextIndex;
	int		add(void);
	void	print(void);
	void	indexPrint(int index);
};


#endif
