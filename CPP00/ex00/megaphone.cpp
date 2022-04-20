/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:45:52 by snuts             #+#    #+#             */
/*   Updated: 2022/03/29 20:45:56 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int		i;
	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			int j = 0;
			while (argv[i][j])
			{
				std::cout << char (toupper(argv[i][j]));
				j++; 
			}
			i++;
		}
		std::cout << std::endl;	
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}