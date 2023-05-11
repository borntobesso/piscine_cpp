/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:47:41 by sojung            #+#    #+#             */
/*   Updated: 2022/08/19 21:43:46 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
void	printArray(Array<T> &arr)
{
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " " << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	Array<>			empty;
	Array<int>		arrInt(10);
	Array<float>	arrFloat(10);
	Array<char>		arrChar(5);
	Array<char>		arrChar2(7);
	Array<std::string>	arrString(5);

	std::cout << "-----addresses of arrays-----" << std::endl << std::endl;
	std::cout << "empty :\t\t" << &empty << std::endl;
	std::cout << "arrInt :\t" << &arrInt << std::endl;
	std::cout << "arrFloat :\t" << &arrFloat << std::endl;
	std::cout << "arrChar :\t" << &arrChar << std::endl;
	std::cout << "arrChar2 :\t" << &arrChar2 << std::endl;
	std::cout << std::endl;

	std::cout << "--------arrays initialized by default--------" << std::endl << std::endl;
	std::cout << "\t-----empty-----" << std::endl;
	printArray(empty);
	std::cout << "\t-----arrInt-----" << std::endl;
	printArray(arrInt);
	std::cout << "\t-----arrFloat-----" << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	printArray(arrFloat);
	std::cout << "\t-----arrChar-----" << std::endl;
	printArray(arrChar);
	std::cout << "\t-----arrChar2-----" << std::endl;
	printArray(arrChar2);
	std::cout << "\t-----arrString-----" << std::endl;
	printArray(arrString);

	for (int i = 0; i < 10; i++)
	{
		arrInt[i] = i;
		arrFloat[i] = i;
		if (i < 5)
		{
			arrChar[i] = 'A' + i;
			arrString[i] = "Lou";
		}
		if (i < 7)
			arrChar2[i] = 'a' + i;
	}

	std::cout << "--------arrays after value assignments--------" << std::endl << std::endl; 
	std::cout << "\t-----empty-----" << std::endl;
	printArray(empty);
	std::cout << "\t-----arrInt-----" << std::endl;
	printArray(arrInt);
	std::cout << "\t-----arrFloat-----" << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	printArray(arrFloat);
	std::cout << "\t-----arrChar-----" << std::endl;
	printArray(arrChar);
	std::cout << "\t-----arrChar2-----" << std::endl;
	printArray(arrChar2);
	std::cout << "\t-----arrString-----" << std::endl;
	printArray(arrString);

	arrChar = arrChar2;

	for (unsigned int i = 0; i < arrInt.size(); i++)
		arrInt[i] += 100;

	std::cout << "-----arrChar after copy assignment-----" << std::endl;
	printArray(arrChar);

	std::cout << "-----arrInt after add operation-----" << std::endl;
	printArray(arrInt);

	std::cout << "-----operator [] exception test-----" << std::endl;
	try
	{
		std::cout << arrInt[100] << std::endl;
	}
	catch (std::exception &e) {}

	return (0);
}
