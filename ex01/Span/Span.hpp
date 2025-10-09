/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:21:25 by uschmidt          #+#    #+#             */
/*   Updated: 2025/10/08 15:24:46 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

class Span
{
	private:
		unsigned int	_size;
		std::vector<int> _data;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		~Span();
		Span &operator=(const Span &other);

		void addNumber(int num);
		int	shortestSpan(void) const;
		int	longestSpan(void) const;

		class SpanFilledException: public std::exception 
		{
			virtual const char * what() const throw();
		};

		class FewElementsException: public std::exception 
		{
			virtual const char * what() const throw();
		};
};
#endif
