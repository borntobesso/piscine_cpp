/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:43:59 by sojung            #+#    #+#             */
/*   Updated: 2022/07/28 17:18:14 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{

private:
	int					_fixedPointNumber;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(Fixed const &oldFixed);
	Fixed(Fixed &oldFixed);
	void	operator = (const Fixed &oldFixed);
	void	operator = (Fixed &oldFixed);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator << (std::ostream &os, const Fixed &n);

#endif
