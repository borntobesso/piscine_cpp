/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:42:43 by sojung            #+#    #+#             */
/*   Updated: 2022/08/19 21:42:57 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <iomanip>

template<typename T = int>
class	Array
{
	private:

		T				*_arr;
		unsigned int	_size;

	public:
	
		Array<T>() : _arr(NULL), _size(0) {}
		Array<T>(unsigned int n) : _arr(new T[n]()), _size(n) {}
		Array<T>(const Array &rhs) { *this = rhs; }
		~Array<T>(void) { delete [] _arr; }
		Array<T> &operator = (const Array &rhs)
		{
			delete [] _arr;
			_arr = new T[rhs.size()];
			_size = rhs.size();
			for (unsigned int i = 0; i < rhs.size(); i++)
				_arr[i] = rhs[i];
			return (*this);
		}
		T	&operator [] (unsigned int i) const
		{
			try
			{
				if (i >= this->size())
					throw (IndexException());
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
				throw ;
			}
			return (_arr[i]);
		}

		unsigned int	size(void) const { return (_size); }

		class	IndexException : public std::exception
		{
			public :
			
				const char *what(void) const throw()
				{
					return ("Index is out of bounds");
				}
		};
};

#endif
