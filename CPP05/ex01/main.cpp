/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:47:20 by snuts             #+#    #+#             */
/*   Updated: 2022/04/11 20:46:13 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat b1("Boris", 100);
	Bureaucrat b2("Sergey", 21);

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


	Form f1("28C");
	Form f2("173Q", 140, 130);
	Form f3("1A", 1, 1);
	
	b1.signForm(f1);
	b2.signForm(f1);
	
	b1.signForm(f2);

	b2.signForm(f3);
	return (0);
}