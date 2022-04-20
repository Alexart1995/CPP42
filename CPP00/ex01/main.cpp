/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:33:09 by snuts             #+#    #+#             */
/*   Updated: 2022/03/29 20:44:40 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	int		run;
	PhoneBook Book;
	std::string command;
	
	run	= 1;
	while (run == 1)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if(std::cin.eof())
			break;
		if (command == "ADD")
			Book.add_contact();
		else if (command == "SEARCH")
			Book.search_contact();
		else if (command == "EXIT")
			run = 0;
		else
			std::cout << "Error command" << std::endl;
	}
	return 0;
}