/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:16:19 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 14:23:19 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PPF for " + target, 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) :Form(other)
{
	_target = other._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm & other)
{
	Form::operator=(other);
	_target = other._target;
	return (*this);
}

void 			PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	CheckExecution(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}