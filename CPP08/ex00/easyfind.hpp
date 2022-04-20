/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:43:45 by snuts             #+#    #+#             */
/*   Updated: 2022/04/15 22:31:53 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector

template <typename T>

typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), n);
	return (it);
}

#endif