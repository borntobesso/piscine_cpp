/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:56:58 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 12:52:59 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _input(""), inputType(INT) {}

Convert::Convert(const char *input) : _input(input) {}

Convert::Convert(const Convert &rhs) : _input(rhs._input), inputType(rhs.inputType) {}

Convert::~Convert() {}

Convert &Convert::operator = (const Convert &rhs)
{
	_input = rhs._input;
	inputType = rhs.inputType;
	return (*this);
}

void	Convert::printNoNum(void) const
{
	std::cout << "char:\t" << std::fixed;
	std::cout << "impossible" << std::endl;
	std::cout << "int:\t" << std::fixed;
	std::cout << "impossible" << std::endl;
	std::cout << "float:\t" << std::fixed;
	std::cout << std::atof(_input) << "f" << std::endl;
	std::cout << "double:\t" << std::fixed;
	std::cout << std::atof(_input) << std::endl;
}

void	Convert::printInf(void) const
{
	std::cout << "char:\t" << std::fixed;
	std::cout << "Non displayable" << std::endl;
	std::cout << "int:\t" << std::fixed;
	std::cout << "impossible" << std::endl;
	std::cout << "float:\t" << std::fixed;
	std::cout << std::atof(_input) << "f" << std::endl;
	std::cout << "double:\t" << std::fixed;
	std::cout << std::atof(_input) << std::endl;
}

void	Convert::print(void) const
{
	if (inputType == NONUM)
		printNoNum();
	else if (inputType == PINF || inputType == NINF)
		printInf();
	else if (inputType == CHAR)
	{
		int	result = _input[0];

		if (result < 32 || result > 126)	
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(result) << "'" << std::endl;
		std::cout << "int:\t" << std::fixed;
		if (result < INT_MIN || result > INT_MAX)
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << result << std::endl;
		std::cout << std::setprecision(1) << "float:\t" << std::fixed;
		if (result < static_cast<int>(FLT_MIN) || result > static_cast<int>(FLT_MAX))
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << static_cast<float>(result) << "f" << std::endl;
		std::cout << "double:\t" << std::fixed;
		if (result < static_cast<int>(DBL_MIN) || result > static_cast<int>(DBL_MAX))
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << static_cast<double>(result) << std::endl;

	}
	else if (inputType == INT)
	{
		long int	result = std::atol(_input);	

		std::cout << "char:\t" << std::fixed;
		if (result < 32 || result > 126)	
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(result) << "'" << std::endl;
		std::cout << "int:\t" << std::fixed;
		if (result < INT_MIN || result > INT_MAX)
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << static_cast<int>(result) << std::endl;
		std::cout << std::setprecision(1) << "float:\t" << std::fixed;
		if (result < static_cast<long int>(FLT_MIN) || result > static_cast<long int>(FLT_MAX))
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << static_cast<float>(result) << "f" << std::endl;
		std::cout << "double:\t" << std::fixed;
		if (result < static_cast<long int>(DBL_MIN) || result > static_cast<long int>(DBL_MAX))
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << static_cast<double>(result) << std::endl;
	}
	else // (DOUBLE, FLOAT)
	{
		double	result = std::atof(_input);

		std::cout << "char:\t" << std::fixed;
		if (result < 32.0 || result > 126.0)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(result) << "'" << std::endl;
		std::cout << "int:\t" << std::fixed;
		if (result < static_cast<double>(INT_MIN) || result > static_cast<double>(INT_MAX))
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << static_cast<int>(result) << std::endl;
		std::cout << std::setprecision(1) << "float:\t" << std::fixed;
		if (result < static_cast<double>(FLT_MIN) || result > static_cast<double>(FLT_MAX))
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << static_cast<float>(result) << "f" << std::endl;
		std::cout << "double:\t" << std::fixed;
		long double	long_result = strtold(_input, NULL);

		if (long_result < static_cast<long double>(DBL_MIN) || long_result > static_cast<long double>(DBL_MAX))
			std::cout << "impossible : overflow" << std::endl;
		else
			std::cout << static_cast<double>(long_result) << std::endl;
	}
}
