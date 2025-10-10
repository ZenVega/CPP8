/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:26:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/10/08 10:37:07 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span/Span.hpp"
#include <iostream>
#include <exception>

using std::cout;
using std::endl;

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span emptySpan = Span();
	try {
		emptySpan.addNumber(3);
	}
	catch (std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}

	Span span = Span(5);
	try {
		span.addNumber(3);
		span.addNumber(-3003);
		span.addNumber(903);
		span.addNumber(-3234003);
		span.addNumber(0);
		span.addNumber(-33);
	}
	catch (std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	try {
		cout << "The shortest span is: " << span.shortestSpan() << endl;
		cout << "The longest span is: " << span.longestSpan() << endl;
		emptySpan.longestSpan();
	}
	catch (std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}


	try {
		int iter_arr[] = { -666, 6, 7, 8, 9, 11 };
		std::vector<int> toIter (iter_arr, iter_arr + sizeof(iter_arr) / sizeof(int) );
		Span iter = Span(42);
		iter.addNumber(6);
		iter.addNumber(3);
		iter.addRange(toIter.begin(), toIter.end());
		cout << "The shortest span is: " << iter.shortestSpan() << endl;
		cout << "The longest span is: " << iter.longestSpan() << endl;
	}
	catch (std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}

	return 0;
}
