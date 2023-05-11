/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 23:55:47 by sojung            #+#    #+#             */
/*   Updated: 2022/08/19 15:15:34 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template<typename T>
T	min(T const &a, T const &b)
{
	return ((a < b) ? a : b);
}

template<typename T>
T	max(T const &a, T const &b)
{
	return ((a > b) ? a : b);
}
