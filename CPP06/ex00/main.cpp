/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:40:36 by snuts             #+#    #+#             */
/*   Updated: 2022/04/13 21:44:31 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Convert.hpp"


void print_for_fun(std::string line)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << atof(line.c_str()) << "f" << std::endl;
	std::cout << "double: " << atof(line.c_str()) << std::endl;
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number args: <input string to convert>" << std::endl;
		return (1);
	}
	else
	{
		Convert conv;
		try
		{
			conv.ConvertStr(argv[1]);
			if (conv.is_nan(argv[1]))
			{
				print_for_fun(argv[1]);
				return 0;
			}
			else
				conv.printValue(argv[1]);
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		
		// double x = std::stof(argv[1]);
		// std::cout << isdigit(x) << std::endl;
		// std::cout << "char: " << static_cast<char>(x) << std::endl;
		// std::cout << "int: " << static_cast<int>(x) << std::endl;
		// std::cout << "float: " << static_cast<float>(x) <<  std::endl;
		// std::cout << "double: " << static_cast<double>(x) << std::endl;
	}
	return (0);
}