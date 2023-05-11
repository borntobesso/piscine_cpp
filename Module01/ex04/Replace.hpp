/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:05:53 by sojung            #+#    #+#             */
/*   Updated: 2022/07/28 10:42:56 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>

class	Replace
{
private:
	std::string	_inputFile;
	std::string	_str1;
	std::string	_str2;

public:
	Replace(std::string args[3]);
	~Replace();
	int	argsValidCheck(void);
	int	replacer(void);
};

#endif
