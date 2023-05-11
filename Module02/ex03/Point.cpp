/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:01:41 by sojung            #+#    #+#             */
/*   Updated: 2022/08/01 16:54:33 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &oldPoint) : _x(oldPoint.getX()), _y(oldPoint.getY()){}

Point::Point(Point &oldPoint) : _x(oldPoint.getX()), _y(oldPoint.getY()){}

Point	&Point::operator = (const Point &oldPoint)
{
	if (this != &oldPoint)
		return (*this);
	return (*this);
}

Point	&Point::operator = (Point &oldPoint)
{
	if (this != &oldPoint)
		return (*this);
	return (*this);
}

Point::~Point(void){}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}
