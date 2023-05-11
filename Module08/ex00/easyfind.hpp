/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:38:35 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 14:41:58 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>
# include <list>
# include <deque>

template<typename T>
typename T::const_iterator easyfind(const T& container, int i)
{
	typename T::const_iterator	result;
	result = std::find(container.begin(), container.end(), i);

	if (result == container.end())
		return (container.end());
	else
		return (result);
};

#endif
