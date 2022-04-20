/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:20:15 by snuts             #+#    #+#             */
/*   Updated: 2022/03/31 20:32:00 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
 
int main (void)
{
	std::string		brains;
	brains = "HI THIS IS BRAIN";
	std::string		*stringPTR = &brains;
	std::string		&stringREF = brains;
	
	std::cout << "The memory address of the string variable " << &brains << std::endl;
	std::cout << "The memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF " << &stringREF << std::endl;
	
	std::cout << "The value of the string variable " << brains << std::endl;
	std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF " << stringREF << std::endl;
	
	return (0);
}