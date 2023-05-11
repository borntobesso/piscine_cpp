/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:34:53 by sojung            #+#    #+#             */
/*   Updated: 2022/08/01 16:58:08 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point const	a(1.2f, 1.2f);
	Point const	b(7.0f, 3.5f);
	Point const	c(3.3f, 7.2f);
	Point const point1(3.5f, 3.5f); // point in the triangle
	Point const point2(point1); // copy constructor
	Point const	point3 = point2; // copy assignment operator
	Point const	point4(10.25f, 6.77f); // point out of the triangle

	std::cout << "X value of point1 : " << point1.getX() << std::endl;
	std::cout << "Y value of point1 : " << point1.getY() << std::endl << std::endl;
	
	std::cout << "X value of point2 : " << point2.getX() << std::endl;
	std::cout << "Y value of point2 : " << point2.getY() << std::endl << std::endl;

	std::cout << "X value of point3 : " << point3.getX() << std::endl;
	std::cout << "Y value of point3 : " << point3.getY() << std::endl << std::endl;

	std::cout << "X value of point4 : " << point4.getX() << std::endl;
	std::cout << "Y value of point4 : " << point4.getY() << std::endl << std::endl;

	std::cout << "Three vertices : a(" << a.getX() << ", " << a.getY() << \
	"), b(" << b.getX() << ", " << b.getY() << "), c(" \
	<< c.getX() << ", " << c.getY() << ")" << std::endl << std::endl;

	std::cout << "Is the point1 in the triangle? : ";
	if (bsp(a, b, c, point1) == true)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is the point4 int the triangle? : ";
	if (bsp(b, c, a, point4) == true)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	return (0);
}
