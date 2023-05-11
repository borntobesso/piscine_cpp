/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:59:12 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 16:32:45 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <iterator>

template<typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public:
		
		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		MutantStack<T>() {};
		MutantStack<T>(const MutantStack<T> &rhs) { *this = rhs; };
		~MutantStack<T>() {};
		MutantStack<T>	&operator = (const MutantStack<T> &rhs) { *this = rhs; return (*this); };

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
		reverse_iterator	rbegin() { return this->c.rbegin(); }
		reverse_iterator	rend() { return this->c.rend(); }
};

#endif
