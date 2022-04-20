/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:02:19 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 14:08:47 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RRF for " + target, 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : Form(other)
{
	_target = other._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm & other)
{
	Form::operator=(other);
	_target = other._target;
	return (*this);
}

void 			RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	CheckExecution(executor);
	srand(time(NULL));
	std::cout << this->getName() << " makes some drilling noises" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->_target << " robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << this->_target << " the robotomy failed" << std::endl;
}