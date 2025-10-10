/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:26:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/10/10 12:14:27 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack/MutantStack.hpp"
#include <iostream>
#include <list>

int main(void)
{
	MutantStack<int> mstack;
	std::list<int> mlist;
	mstack.push(5);
	mstack.push(17);
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "Print last chars" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << mlist.back() << std::endl;
	mstack.pop();
	mlist.pop_back();
	std::cout << "Print size after pop" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << mlist.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator it_l = mlist.begin();
	std::list<int>::iterator ite_l = mlist.end();
	++it;
	--it;
	++it_l;
	--it_l;
	std::cout << "Print all after pushing four" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << "Print all after pushing four" << std::endl;
	while (it_l != ite_l)
	{
	std::cout << *it_l << std::endl;
	++it_l;
	}
	std::cout << "Reverse iterstor" << std::endl;

	MutantStack<int>::reverse_iterator it_r = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite_r = mstack.rend();
	while (it_r != ite_r)
	{
	std::cout << *it_r << std::endl;
	++it_r;
	}
	return 0;
}
