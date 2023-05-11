/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:50:32 by sojung            #+#    #+#             */
/*   Updated: 2022/08/19 11:44:35 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	plusOne(T &a)
{
	a += 1;
}

template<typename T>
void	print(const T &a)
{
	std::cout << a << std::endl;
}

int	main(void)
{
	int		arr[] = { 100, 200, 300, 400, 500 };
	char	arr2[] = { 'A', 'B', 'C', 'D', 'E' };

	std::cout << "---Before plus one function---" << std::endl;
	iter(arr, 5, print);
	iter(arr2, 5, print);

	iter(arr, 5, plusOne);
	iter(arr2, 5, plusOne);

	std::cout << std::endl;
	std::cout << "---After plus one function---" << std::endl;
	iter(arr, 5, print);
	iter(arr2, 5, print);

	return (0);
}
