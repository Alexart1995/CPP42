/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:47:20 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 15:54:36 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main ()
{
	Bureaucrat b1("Boris", 100);
	Bureaucrat b2("Sergey", 21);
	Bureaucrat President("Vova", 1);

	try
	{
		Bureaucrat b3("Error", 170);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		b1.incrementGrade(20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		b2.decrementGrade(50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << b1 << b2 << std::endl;


	ShrubberyCreationForm f1("28C");
	RobotomyRequestForm f2("173Q");
	PresidentialPardonForm f3("1A");
	
	b1.signForm(f1);
	b2.signForm(f1);
	
	b1.signForm(f2);

	b2.signForm(f3);
	b2.executeForm(f3);
	
	b2.executeForm(f1);

	President.executeForm(f2);
	President.signForm(f2);
	President.signForm(f2);
	President.executeForm(f2);

	President.executeForm(f3);

	{
		Intern someRandomIntern;
		Form* rrf;
		Form* rrf1;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf1 = someRandomIntern.makeForm("error request", "Bender");
		President.executeForm(*rrf);
		President.signForm(*rrf);
		President.executeForm(*rrf);
		
		delete rrf;
		delete rrf1;
	}
	return (0);
}