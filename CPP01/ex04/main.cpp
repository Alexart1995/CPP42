/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:14:50 by snuts             #+#    #+#             */
/*   Updated: 2022/04/02 16:56:49 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	if (argc != 4)
		std::cout << "wrong number of args" << std::endl;
	else if (argv[2][0] == '\0')
	{
		std::cout << "wrong args: s1 is empty" << std::endl;
	}
	else
	{
		std::string		filename;
		filename = argv[1];
		ifs.open(argv[1]);
		if (!ifs.is_open())
		{
			std::cerr << filename << " Error opening file" << std::endl;
			ifs.close();
			return (1);
		}
		else
		{
			ofs.open(filename + ".replace");
			if (!ofs.is_open())
			{
				std::cerr << filename + ".replace" << " Error opening file" << std::endl;
				ifs.close();
				return (1);
			}
			std::string		str1 = argv[2];
			std::string		str2 = argv[3];
			std::string		str;
			std::string		replaced;
			while(!ifs.eof())
			{
				str = "";
				replaced = "";
				getline(ifs, str);
				int		i = 0;
				int		j = 0;
				while (1)
				{
					j = str.find(str1, i);
					if (j < 0)
					{
						replaced += str.substr(i, j - i);
						break;
					}
					replaced += str.substr(i, j - i);
					replaced += str2;
					i = j + str1.size();
				}
				ofs << replaced;
				ofs << std::endl;
			}
			ifs.close();
			ofs.close();
		}
	}
	return (0);
}