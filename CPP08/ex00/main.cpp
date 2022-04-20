/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:43:29 by snuts             #+#    #+#             */
/*   Updated: 2022/04/15 22:28:00 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
int main()
{
	std::vector <int>	v2;

	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i * i);
	}
	
	std::vector<int>::iterator		it = v2.begin();

	while (it != v2.end())
	{
		std::cout << *it << std::endl;
		++it;
	}

	it = easyfind(v2, 81);
	std::cout << *it << std::endl;

	it = easyfind(v2, 137);
	std::cout << *it << std::endl;
	

}