/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:28:22 by snuts             #+#    #+#             */
/*   Updated: 2022/03/31 20:09:39 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(6, "Alex");
	for (int i = 0; i < 6; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	
	return (0);
}