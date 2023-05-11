/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:39:14 by sojung            #+#    #+#             */
/*   Updated: 2022/08/01 16:57:03 by sojung           ###   ########.fr       */
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

	Fixed	&operator = (const Fixed &oldFixed);
	Fixed	&operator = (Fixed &oldFixed);

	bool	operator > (const Fixed &f) const;
	bool	operator < (const Fixed &f) const;
	bool	operator >= (const Fixed &f) const;
	bool	operator <= (const Fixed &f) const;
	bool	operator == (const Fixed &f) const;
	bool	operator != (const Fixed &f) const;

	Fixed	&operator + (const Fixed &f);
	Fixed	&operator - (const Fixed &f);
	Fixed	&operator * (const Fixed &f);
	Fixed	&operator / (const Fixed &f);

	Fixed	operator ++ (void);
	Fixed	operator -- (void);
	Fixed	operator ++ (int);
	Fixed	operator -- (int);

	static Fixed	&min(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static Fixed	&max(Fixed &f1, Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);

	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator << (std::ostream &os, const Fixed &n);

#endif
