/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:53:58 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 15:50:03 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern & other)
{
	std::cout << "Copy Intern constructor called" << std::endl;
	(void) other;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator = (const Intern & other)
{
	(void) other;
	return (*this);
}

Form *Intern::makeForm(std::string FormType, std::string target)
{
	std::string formtypes[4] = {"shruberry request", "robotomy request", "presidential request"};

	Form *forms[4] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target), NULL};
	
	int		i = 0;
	while(i < 3)
	{
		if(formtypes[i] == FormType)
			break ;
		i++;
	}

	if (i == 3)
		std::cout << "Cannot create unknown form" << std::endl;
	else
		std::cout << "Intern creates " << FormType << " form" << std::endl;
	
	for (int j = 0; j < 3; j++)
	{
		if (j != i)
			delete forms[j];
	}
	return forms[i];
}