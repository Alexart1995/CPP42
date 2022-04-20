/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:49:36 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 12:47:06 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name) : _name(name), _gradeToSign(150), _gradeToExecute(150), _issigned(false)
{
	std::cout << "Form Constructor 1 called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), 
			_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _issigned(false) 
{
	std::cout << "Form Constructor 2 called" << std::endl;
}

Form::Form(const Form & other) : _name(other.getName()), _gradeToSign(other.getGradeToSign()),
							 _gradeToExecute(other.getGradeToExecute()), _issigned(other.getIsSigned())
{
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator = (const Form & other)
{
	this->_issigned = other.getIsSigned();
	return (*this);
}

const std::string		&Form::getName() const {return _name;}
const int				&Form::getGradeToSign() const {return _gradeToSign;}
const int				&Form::getGradeToExecute() const {return _gradeToExecute;}
const bool				&Form::getIsSigned() const {return _issigned;}

void					Form::beSigned(Bureaucrat & bur)
{
	if (_issigned)
		throw IsAlreadySignedException();
	if (bur.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_issigned = true;
}


void			Form::CheckExecution(Bureaucrat const & executor) const
{
	if (!_issigned)
		throw FormIsNotSigned();
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
}
void 			Form::execute(Bureaucrat const & executor) const
{
	CheckExecution(executor);
}

std::ostream & operator << (std::ostream & ofs, const Form & other)
{
	if (other.getIsSigned())
		ofs << "Form " << other.getName() << " is signed" << std::endl;
	else
		ofs << "Form " << other.getName() << " is not signed" << std::endl;
	return ofs;
}
