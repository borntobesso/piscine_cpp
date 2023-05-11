/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 23:00:20 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 13:13:34 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	*surprisetype = generate();

	std::cout << "---identification by pointer---" << std::endl;
	identify(surprisetype);

	std::cout << std::endl;
	std::cout << "---identification by reference---" << std::endl;
	identify(*surprisetype);

	return (0);
}
