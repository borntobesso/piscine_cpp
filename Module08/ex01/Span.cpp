/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:00:09 by sojung            #+#    #+#             */
/*   Updated: 2022/08/23 21:40:53 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _n(n), _span(std::vector<int>()) {}

Span::Span(const Span &rhs) : _n(rhs._n), _span(rhs._span) {}

Span::~Span() {}

Span &Span::operator = (const Span &rhs)
{
	_n = rhs._n;
	_span = rhs._span;
	return (*this);
}

void	Span::addNumber(int n)
{
	try
	{
		if (_span.size() < _n)
			_span.push_back(n);
		else
			throw (Span::FullException());
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw ;
	}
}

unsigned int	Span::shortestSpan(void)
{
	try
	{
		unsigned int	size = _span.size();
		unsigned int	shortest;

		if (size < 2)
			throw (Span::NoSpanException());
		std::sort(_span.begin(), _span.end());
		shortest = _span[1] - _span[0];
		for (unsigned int i = 0; i < size - 1; i++)
		{
			if (static_cast<unsigned int>(_span[i + 1] - _span[i]) < shortest)
				shortest = _span[i + 1] - _span[i];
		}
		return (shortest);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw ;
	}
}

unsigned int	Span::longestSpan(void)
{
	try
	{
		unsigned int	size = _span.size();
		unsigned int	longest;

		if (size < 2)
			throw (Span::NoSpanException());
		longest = static_cast<unsigned int>(*std::max_element(_span.begin(), _span.end()) - *std::min_element(_span.begin(), _span.end()));
		return (longest);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw ;
	}
}

void	Span::addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try
	{
		for (std::vector<int>::iterator it = begin; it != end; it++)
			addNumber(*it);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw ;
	}
}

const char	*Span::FullException::what(void) const throw()
{
	return ("Span is full");
}

const char	*Span::NoSpanException::what(void) const throw()
{
	return ("No span can be found, not enough elements");
}
