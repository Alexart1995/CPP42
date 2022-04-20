/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:28:22 by snuts             #+#    #+#             */
/*   Updated: 2022/04/02 17:03:46 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	randomChump("Alex");
	
	Zombie* d = newZombie("Nikolay");
	d->announce();
	delete d;
	return (0);
}