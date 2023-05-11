/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:46:59 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 12:36:35 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <bits/stdc++.h>
# include <iomanip>

enum	Type { CHAR, INT, DOUBLE, FLOAT, NONUM, PINF, NINF };

class	Convert
{

	private:
		
		const char *_input;
		Convert();

	public:

		Convert(const char *input);
		Convert(const Convert &rhs);
		Convert &operator = (const Convert &rhs);
		~Convert();

		Type	inputType;
	
		void	printNoNum() const;
		void	printInf() const;
		void	print() const;
};	

#endif
