/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:16:18 by snuts             #+#    #+#             */
/*   Updated: 2022/04/04 19:03:37 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>
int main( void ) {

	Point a;
	Point b(1.5f, 1.5f);
	Point c(0.0f, 2.0f);

	{
		Point point;
	
		if (bsp(a, b, c, point))
			std::cout << "The point inside Triangle" << std::endl;
		else
			std::cout << "The point not inside Triangle" << std::endl;
		
		
	}
	
	{
		Point x(1.0f, 1.25f);
		if (bsp(a, b, c, x))
			std::cout << "The point inside Triangle" << std::endl;
		else
			std::cout << "The point not inside Triangle" << std::endl;
	}
	
	return 0;
}