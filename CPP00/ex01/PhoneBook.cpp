/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:24:04 by snuts             #+#    #+#             */
/*   Updated: 2022/03/29 21:25:47 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amount = 0;
	this->index = 0;
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Distructor called" << std::endl;
}

void	PhoneBook::search_contact(void)
{
	std::string		search_index;
	int				s_index;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1;
		this->contacts[i].show_info();
	}
	if (this->amount == 0)
		return;
	std::cout << "Input Index of Contact :" << std::endl;
	std::getline(std::cin, search_index);
	try
	{
		s_index = std::stoi(search_index);
	}
	catch(const std::invalid_argument&)
	{
		std::cout << "Command not index " << std::endl;
		return ;
	}
	if (s_index <= 8 && s_index >= 1 && s_index - 1 < this->amount)
		this->contacts[s_index - 1].show_contact();
	else
		std::cout << "Wrong index" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	if(this->amount < 8)
	{
		this->contacts[this->amount].set_info();
		if(this->contacts[this->amount].right_acc == 0)
			++this->amount;
	}
	else if (this->amount == 8)
	{
		std::cout << "Book is overloaded" << std::endl;
		if(this->index == 8)
			this->index = 0;
		this->contacts[this->index].set_info();
		if(this->contacts[this->index].right_acc == 0)
			++this->index;
	}
}