/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:19:00 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 14:29:05 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(const T *arr, size_t len, void (*f)(const T &))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template<typename T>
void	iter(T *arr, size_t len, void (*f)(T &))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
