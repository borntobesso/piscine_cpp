/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:42:16 by sojung            #+#    #+#             */
/*   Updated: 2022/08/01 16:54:36 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(const float x, const float y);
		Point(Point const &oldPoint);
		Point(Point &oldPoint);
		~Point();

		Point	&operator = (const Point &oldPoint);
		Point	&operator = (Point &oldPoint);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif 
