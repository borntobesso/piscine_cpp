/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:08:24 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 14:24:28 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << "=====more tests=====" << std::endl << std::endl;

	char	e = 'E';
	char	f = 'F';

	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	float	g = 1.2f;
	float	h = 3.4f;

	::swap( g, h );
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

	return 0;
}
