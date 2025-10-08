/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:26:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/10/08 09:47:51 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind/easyfind.hpp"
#include <vector>

int main(void)
{
	size_t size = 10;
	std::vector<int> v(size);

	for (size_t i = 0; i < size; i++)
		v[i] = i;

	easyfind(v, 3);
	easyfind(v, size);
	return 0;
}
