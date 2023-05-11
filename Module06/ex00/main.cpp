/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:05:38 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 12:09:41 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	msg_error(const char *msg)
{
	std::cerr << msg << std::endl;
	return (1);
}

int	is_digit(const std::string &input)
{
	int	f_flag = 0;
	int	dot_flag = 0;

	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == '.')
			dot_flag = 1;
		else if (input[i] == 'f')
			f_flag = 1;
		else if (!(input[i] == '+' || input[i] == '-' || input[i] == 'f' || input[i] == '.' || \
				(input[i] >= '0' && input[i] <= '9')))
			return (-1); // error
	}
	if (f_flag == 1) // float
		return (0);
	else if (dot_flag == 0) // int
		return (1);
	else // double
		return (2);
}

int	typeFinder(std::string input, Convert &convert)
{
	if (input == "nan" || input == "nanf")
		convert.inputType = NONUM;
	else if (input == "+inf" || input == "+inff" || input == "inf")
		convert.inputType = PINF;
	else if (input == "-inf" || input == "-inff")
		convert.inputType = NINF;
	else
	{
		int	result = is_digit(input);

		if (result == -1)
			return (1);
		else if (result == 0)
			convert.inputType = FLOAT;
		else if (result == 1)
			convert.inputType = INT;
		else if (result == 2)
			convert.inputType = DOUBLE;
	}
	return (0);
}


int	main(int ac, char **av)
{
	if (ac != 2)
		return (msg_error("Program requires one and only argument to convert"));
	else
	{
		std::string	input(av[1]);
		Convert convert(av[1]);

		if (input.length() == 1)
		{
			if ('0' <= input[0] && input[0] <= '9')
				convert.inputType = INT;
			else
				convert.inputType = CHAR;
		}
		else
		{		
			for (size_t i = 0; i < input.length(); i++)
				input[i] = tolower(input[i]);
			if (typeFinder(input, convert) == 1)
				return (msg_error("Argument includes non valid character"));
		}
		convert.print();
	}

	return (0);
}
