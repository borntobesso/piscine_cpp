/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:17:15 by sojung            #+#    #+#             */
/*   Updated: 2022/08/01 16:54:25 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int	crossCount = 0;

	if ((a.getY() > point.getY()) != (b.getY() > point.getY()))
	{
		Fixed	atX((b.getX() - a.getX()) * (point.getY() - a.getY()) / (b.getY() - a.getY()) + a.getX());
		if (point.getX() < atX)
			crossCount++;
	}
	if ((b.getY() > point.getY()) != (c.getY() > point.getY()))
	{
		Fixed	atX2((c.getX() - b.getX()) * (point.getY() - b.getY()) / (c.getY() - b.getY()) + b.getX());
		if (point.getX() < atX2)
			crossCount++;
	}
	if ((c.getY() > point.getY()) != (a.getY() > point.getY()))
	{
		Fixed	atX3((a.getX() - c.getX()) * (point.getY() - c.getY()) / (a.getY() - c.getY()) + c.getX());
		if (point.getX() < atX3)
			crossCount++;
	}
	return ((crossCount % 2 > 0));
}
