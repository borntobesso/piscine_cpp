/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:48:26 by sojung            #+#    #+#             */
/*   Updated: 2022/07/27 17:30:23 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{

private:
	int					_fixedPointNumber;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	Fixed(Fixed &oldFixed);
	void	operator = (const Fixed &oldFixed);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
