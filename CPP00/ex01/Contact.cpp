/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:24:19 by snuts             #+#    #+#             */
/*   Updated: 2022/03/29 18:15:55 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact(void)
{
	this->right_acc = 0;
	this->fields[0] = "First Name";
	this->fields[1] = "Last Name";
	this->fields[2] = "Nickname";
	this->fields[3] = "Phone Number";
	this->fields[4] = "Darkest Secret";
	std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact Distructor called" << std::endl;
}

void	Contact::set_info(void)
{
	std::string		info;

	for (int i = FirstName; i <= DarkestSecret; ++i)
	{
		std::cout << Contact::fields[i] << " :" << std::endl;
		std::getline(std::cin, info);
		if(info.length() == 0)
		{
			std::cout << "Empty input" << std::endl;
			this->right_acc = 1;
			return ;
		}
		this->info[i] = info;
	}
	this->right_acc = 0;
	std::cout << "Info Added" << std::endl;
}

void	Contact::show_info(void)
{
	for (int i = FirstName; i < PhoneNumber; ++i)
	{
		if (this->info[i].length() > 10)
			std::cout << "|" << this->info[i].substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->info[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::show_contact(void)
{
	for (int i = FirstName; i <= DarkestSecret; ++i)
	{
		std::cout << fields[i] << ": " << this->info[i] << std::endl;
	}
}