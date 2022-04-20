/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:27:32 by snuts             #+#    #+#             */
/*   Updated: 2022/04/14 16:39:26 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>

void iter(T *arr, int size, void (*f)(const T &))
{
	for (int i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}

#endif