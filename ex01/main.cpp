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


	return 0;
}
