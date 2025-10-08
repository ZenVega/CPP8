/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:08:47 by uschmidt          #+#    #+#             */
/*   Updated: 2025/10/08 10:46:57 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::endl;

const char *NotInContainerException::what() const throw()
{
	return "Item not found!";
}

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
	typedef typename T::iterator Iter;
	Iter first =container.begin();
	Iter last = container.end();

	Iter it = std::find(first, last, n);
	if (it == last)
		throw NotInContainerException();
	else
		return it;
};
#endif //EASYFIND_TPP
