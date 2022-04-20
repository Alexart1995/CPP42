/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:27:22 by snuts             #+#    #+#             */
/*   Updated: 2022/04/14 17:10:17 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <math.h>
#include <iostream>

template <typename T>
void	square(T & i)
{
	std::cout << i * i << " " << std::endl;
}

template <typename T>
void	display(T & i)
{
	std::cout << i << " " << std::endl;
}
int main (void)
{
	std::string arr1[3] = {"school 21", "Ecole42", "Moscow"};
	int arr[5] = {0, 1, 2, 3, 4};
	::iter(arr, 5, &display);
	::iter(arr1, 3, &display);
	::iter(arr, 5, &square);
}