/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:08:47 by uschmidt          #+#    #+#             */
/*   Updated: 2025/10/08 09:45:53 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

using std::cout;
using std::endl;

template <typename T>
void easyfind(T &container, int n)
{
	typename T::iterator first =container.begin();
	typename T::iterator last = container.end();
	typename T::iterator current = first;

	while (current != last)
	{
		if (*current == n)
		{
			cout << "Int: " << n << " found and pos: "
				<< std::distance(first, current) << endl;
			return ;
		}
		current++;
	}
	cout << "Int: " << n << " not in container!" << endl;
};
