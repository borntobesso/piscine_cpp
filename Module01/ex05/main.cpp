/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:26:18 by sojung            #+#    #+#             */
/*   Updated: 2022/07/26 16:31:56 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl Harl;

	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("WARNING");
	Harl.complain("ERROR");
	Harl.complain("BLABLA");

	return (0);
}
