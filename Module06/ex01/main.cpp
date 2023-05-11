/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:22:07 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 13:00:30 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	uiPtr = reinterpret_cast<uintptr_t>(ptr);
	return (uiPtr);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main(void)
{
	Data	patient;

	patient.name = "Jack Jack";
	patient.age = 10;
	patient.height = 131.5;
	patient.weight = 30.5;
	patient.vaccinated = true;

	std::cout << "Address of Data variable :\t\t" << &patient << std::endl;

	uintptr_t	uiPtr = serialize(&patient);

	std::cout << "uiPtr value after serialization :\t" << std::showbase << std::hex << uiPtr << std::endl;

	Data	*patientCopy = deserialize(uiPtr);

	std::cout << "Address of deserialized Data :\t\t" << patientCopy << std::endl << std::endl << std::dec << std::noshowbase;

	std::cout << "\t---Access to inside-Data variables with the deserialized poiter---" << std::endl << std::endl;
	std::cout << "Name :\t\t" << patientCopy->name << std::endl;
	std::cout << "Age :\t\t" << patientCopy->age << std::endl;
	std::cout << "Height :\t" << patientCopy->height << std::endl;
	std::cout << "Weight :\t" << patientCopy->weight << std::endl;
	std::cout << "Vaccinated :\t" << patientCopy->vaccinated << std::endl;

	return (0);
}
