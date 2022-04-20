/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:47:56 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 13:16:07 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Default constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other.getName()), _grade(other.getGrade())
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & other)
{
	_grade = other.getGrade();
	return (*this);
}

const int &Bureaucrat::getGrade() const {return _grade;}
const std::string		&Bureaucrat::getName() const {return _name;}

void Bureaucrat::decrementGrade(int data)
{
	if (_grade - data < 1)
		throw GradeTooHighException();
	
	this->_grade -= data; 
}

void Bureaucrat::incrementGrade(int data)
{
	if (_grade + data > 150)
		throw GradeTooLowException();
	this->_grade += data;
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " not executed form "<< form.getName() << " because " << e.what() << '\n';
	}
}

bool Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
		return true;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " couldn’t sign " << form.getName() << " because " <<  e.what() << '\n';
		return false;
	}
}

std::ostream & operator << (std::ostream & ofs, const Bureaucrat & other)
{
	ofs << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return ofs;	
}




