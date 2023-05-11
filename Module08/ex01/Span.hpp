/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:29:08 by sojung            #+#    #+#             */
/*   Updated: 2022/08/23 21:41:37 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class	Span
{
	private:
		Span();
		unsigned int		_n;
		std::vector<int>	_span;

	public:
		Span(unsigned int);
		Span(const Span &rhs);
		~Span();
		Span &operator = (const Span &rhs);

		void			addNumber(int n);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class	FullException : public std::exception
		{
			const char	*what() const throw();
		};

		class	NoSpanException : public std::exception
		{
			const char	*what() const throw();
		};
};

#endif
