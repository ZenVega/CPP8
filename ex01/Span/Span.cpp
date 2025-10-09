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
#include <algorithm>
#include <limits.h>
#include <cmath>

bool comp(int a, int b) {
    return a < b;
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
		_data = other._data;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_size == 0 || _data.size() >= _size)
		throw SpanFilledException();
	_data.push_back(num);
}

int	Span::shortestSpan(void) const 
{
	std::vector<int> data_copy = _data;
	if (data_copy.size() < 2)
		throw Span::FewElementsException();
	int shortestdata_copy = INT_MAX;
	std::sort(data_copy.begin(), data_copy.end(), comp);
	std::vector<int>::const_iterator first = data_copy.begin();
	std::vector<int>::const_iterator last = data_copy.end();
	while (first != last - 1)
	{
		if (std::abs(*(first + 1) - *first) < shortestdata_copy)
			shortestdata_copy = std::abs(*(first + 1) - *first); 
		first++;
	}
	return shortestdata_copy;
}

int	Span::longestSpan(void) const 
{
	std::vector<int> data_copy = _data;
	if (data_copy.size() < 2)
		throw Span::FewElementsException();
	std::sort(data_copy.begin(), data_copy.end(), comp);
	std::vector<int>::const_iterator first = data_copy.begin();
	std::vector<int>::const_iterator last = data_copy.end();

	return *last - *first;
}

const char *Span::SpanFilledException::what() const throw()
{
	return "Index outside Span";
}

const char *Span::FewElementsException::what() const throw()
{
	return "Index outside Span";
}
