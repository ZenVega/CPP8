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

#include "Easyfind/easyfind.hpp"
#include <vector>
#include <iostream>
#include <exception>

using std::cout;
using std::endl;

int main(void)
{
	size_t size = 10;
	std::vector<int> v(size);

	for (size_t i = 0; i < size; i++)
		v[i] = i;

	try {
		std::vector<int>::iterator it;
		it = easyfind(v, 3);
		cout << "Item found at position: " << std::distance(v.begin(), it) << endl;
		it = easyfind(v, size);
		cout << "Item found at position: " << std::distance(v.begin(), it) << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	return 0;
}
