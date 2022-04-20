/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:47:59 by snuts             #+#    #+#             */
/*   Updated: 2022/04/11 20:41:43 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
protected:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & other);
	~Bureaucrat();

	Bureaucrat & operator = (const Bureaucrat & other);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("The grade is too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade is too low");
			}
	};
	bool signForm(Form & form); 
	
	void incrementGrade(int data);
	void decrementGrade(int data);

	const std::string		&getName() const;
	const int				&getGrade() const;
};

std::ostream & operator << (std::ostream & ofs, const Bureaucrat & other);
#endif
