/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:21:43 by uschmidt          #+#    #+#             */
/*   Updated: 2025/10/08 15:51:06 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <bits/stdc++.h>
#include <bits/stdc++.h>

bool comp(int a, int b) {
    return a > b;
}

Span::Span(): _size(0){};

Span::Span(unsigned int N): _size(N){};

Span::Span(const Span &other)
{
	*this = other;
};

Span::~Span(){};

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_size = other._size;
		_span = other._span;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_span.size() >= _size)
		throw SpanFilledException();
	_span.push_back(num);
}

int	Span::shortestSpan(void) const 
{
	if (_span.size() < 2)
		throw Span::FewElementsException();
	int shortest_span = INT_MAX;
	std::sort(_span.begin(), _span.end(), comp);
	std::vector<int>::const_iterator first = _span.begin();
	std::vector<int>::const_iterator last = _span.end();
	while (first != last - 1)
		if (*(first + 1) - *first < shortest_span)
			shortest_span = *(first + 1) - *first; 
	return shortest_span;
}

int	Span::longestSpan(void) const 
{
	if (_span.size() < 2)
		throw Span::FewElementsException();
	std::sort(_span.begin(), _span.end(), comp);
	std::vector<int>::const_iterator first = _span.begin();
	std::vector<int>::const_iterator last = _span.end();
	return *last - *first;
}

const char *Span::SpanFilledException::watch() const throw()
{
	return "Index outside Span";
}

const char *Span::FewElementsException::watch() const throw()
{
	return "Index outside Span";
}
