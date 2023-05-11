/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:42:56 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 17:56:53 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* arr[10];

	std::cout << "----------Animal array creation----------" << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
		arr[i] = new Dog();
	for (int i = 5; i < 10; i++)
		arr[i] = new Cat();

	std::cout << std::endl;
	std::cout << "----------Animal array destruction----------" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
		delete arr[i];

	return 0;
}
