/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:15:07 by sojung            #+#    #+#             */
/*   Updated: 2022/08/24 19:12:03 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
	std::cout << "=======MutantStack test=======" << std::endl << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);

	std::cout << std::endl << "\tMutantStack iterator test" << std::endl <<std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << std::endl << "\tMutantStack reverse iterator test" << std::endl <<std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << std::endl << std::endl << "=======List test=======" << std::endl << std::endl;
	std::list<int> l;
	
	l.push_back(5);
	l.push_back(17);

	std::cout << l.back() << std::endl;

	l.pop_back();

	std::cout << l.size() << std::endl;

	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	
	l.push_back(0);

	std::cout << std::endl << "\tList iterator test" << std::endl <<std::endl;
	std::list<int>::iterator l_it = l.begin();
	std::list<int>::iterator l_ite = l.end();

	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
		std::cout << *l_it << std::endl;
		++l_it;
	}
	
	std::cout << std::endl << "\tList reverse iterator test" << std::endl <<std::endl;
	std::list<int>::reverse_iterator l_rit = l.rbegin();
	std::list<int>::reverse_iterator l_rite = l.rend();

	while (l_rit != l_rite)
	{
		std::cout << *l_rit << std::endl;
		++l_rit;
	}

	std::cout << std::endl << std::endl << "=======Vector test=======" << std::endl << std::endl;
	std::vector<int> v;
	
	v.push_back(5);
	v.push_back(17);

	std::cout << v.back() << std::endl;

	v.pop_back();

	std::cout << v.size() << std::endl;

	v.push_back(3);
	v.push_back(5);
	v.push_back(737);
	
	v.push_back(0);

	std::cout << std::endl << "\tVector iterator test" << std::endl <<std::endl;
	std::vector<int>::iterator v_it = v.begin();
	std::vector<int>::iterator v_ite = v.end();

	++v_it;
	--v_it;
	while (v_it != v_ite)
	{
		std::cout << *v_it << std::endl;
		++v_it;
	}
	
	std::cout << std::endl << "\tVector reverse iterator test" << std::endl <<std::endl;
	std::vector<int>::reverse_iterator v_rit = v.rbegin();
	std::vector<int>::reverse_iterator v_rite = v.rend();

	while (v_rit != v_rite)
	{
		std::cout << *v_rit << std::endl;
		++v_rit;
	}

	return (0);
}
