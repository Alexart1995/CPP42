/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:24:36 by snuts             #+#    #+#             */
/*   Updated: 2022/04/11 20:42:37 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


class Bureaucrat;

class Form
{
private:
	const std::string		_name;
	const int				_gradeToSign;
	const int				_gradeToExecute;
	bool					_issigned;
public:
	Form(std::string name);
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form & other);
	~Form();

	Form & operator = (const Form & other);
	
	class GradeTooHighException : public std::exception
	{
		public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat grade too high");
				}
	};

	class GradeTooLowException : public std::exception
	{
		public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat grade too low");
				}
	};

	class IsAlreadySignedException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return("the form is already signed");
			}
	};
	
	void					beSigned(Bureaucrat & bur);
	
	const std::string		&getName() const;
	const int				&getGradeToSign() const;
	const int				&getGradeToExecute() const;
	const bool				&getIsSigned() const;
	
};

std::ostream & operator << (std::ostream & ofs, const Form & other);

#endif