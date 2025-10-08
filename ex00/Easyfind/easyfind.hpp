/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:38:48 by uschmidt          #+#    #+#             */
/*   Updated: 2025/10/08 10:47:02 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
class NotInContainerException: public std::exception
{
	virtual const char *what() const throw();
};

template <typename T>
//typename here is important to tell the copiler T::iterator is a type, not a member 'iterator'
typename T::iterator easyfind(T &container, int n);

#include "easyfind.tpp"
#endif //EASYFIND_HPP
