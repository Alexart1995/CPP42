/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:11:35 by snuts             #+#    #+#             */
/*   Updated: 2022/04/14 16:22:38 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>

void swap(T & a, T & b)
{
	T buf;

	buf = b;
	b = a;
	a = buf;
}

template <typename T>
T &min(T & a, T & b)
{
	return (b <= a ? b : a);
}

template <typename T>
T &max(T & a, T & b)
{
	return (b >= a ? b : a);
}

#endif