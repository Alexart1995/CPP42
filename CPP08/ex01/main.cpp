/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 22:33:18 by snuts             #+#    #+#             */
/*   Updated: 2022/04/16 18:20:21 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(13);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span span2(10000);

	std::vector<int> vec1;
	// for (int i = 0; i < 500; i++)
	// {
	// 	vec1.push_back(i * 5);
	// }

	try
	{
		// span2.addWithIters(vec1.begin(), vec1.end());
		for (int i = 0; i < 10000; i++)
			vec1.push_back(i * 10);
		span2.addWithIters(vec1.begin(), vec1.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << span2.longestSpan() << std::endl;
	std::cout << span2.shortestSpan()<< std::endl;
	
	
	
	return 0;
}