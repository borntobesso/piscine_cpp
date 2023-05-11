/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:18:30 by sojung            #+#    #+#             */
/*   Updated: 2022/07/28 10:42:54 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string args[3])
{
	_inputFile = args[0];
	_str1 = args[1];
	_str2 = args[2];

};

Replace::~Replace(){};

int	Replace::argsValidCheck(void)
{
	if (this->_inputFile == "")
	{
		std::cout << "file doesn't exist" << std::endl;
		return (1);
	}
	else if (this->_str1.length() == 0)
	{
		std::cout << "the string to replace should not be empty" << std::endl;
		return (1);
	}
	return (0);
}

int	Replace::replacer(void)
{
	std::ifstream	inFile;
	inFile.open(this->_inputFile.c_str()); // open the input file
	if (inFile.is_open() == 0)
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}

	std::stringstream strStream;
	strStream << inFile.rdbuf(); // read the file
	std::string str = strStream.str();
	inFile.close();

	if (str.length() == 0)
	{
		std::cout << "The input file is empty" << std::endl;
		return (1);
	}

	std::size_t	found = str.find(this->_str1);
	while (found != std::string::npos)
	{
		str.erase(found, this->_str1.length());
		str.insert(found, this->_str2);
		found = str.find(this->_str1, found + this->_str2.length());
	}

	std::ofstream	outFile;
	outFile.open((this->_inputFile + ".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	outFile << str;
	outFile.close();
	return (0);
}
