/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:10:28 by snuts             #+#    #+#             */
/*   Updated: 2022/04/14 16:26:16 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main (void)
{
	float x;
	float y;

	x = 42.21f;
	y = 21.42f;
	
	std::cout << ::min(x, y) << std::endl;
	std::cout << ::max(x, y) << std::endl;

	std::cout << "x = " << x << "; y = " << y << std::endl;
	::swap(x, y);
	std::cout << "x = " << x << "; y = " << y << std::endl;

	std::cout << "=======================================" << std::endl;


	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}