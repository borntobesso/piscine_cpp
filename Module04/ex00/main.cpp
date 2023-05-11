/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:42:56 by sojung            #+#    #+#             */
/*   Updated: 2022/08/05 13:17:23 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "-----------------------------------------" << std::endl << std::endl;

	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	const WrongCat *wc = new WrongCat();

	std::cout << k->getType() << std::endl;
	k->makeSound();
	wa->makeSound();
	wc->makeSound();

	delete (meta);
	delete (j);
	delete (i);
	delete (wa);
	delete (k);
	delete (wc);

	return 0;
}
