/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:33:44 by snuts             #+#    #+#             */
/*   Updated: 2022/04/05 16:41:46 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap x;
	ClapTrap alex ("Alex");
	ClapTrap life ("Life");

	life.attack("Alex");
	std::cout << "HP = " << life.getHP() << "; EP = " << life.getEP() << std::endl;
	alex.takeDamage(1);
	std::cout << "HP = " << alex.getHP() << "; EP = " << alex.getEP() << std::endl;
	alex.beRepaired(1);

	std::cout << "HP = " << alex.getHP() << "; EP = " << alex.getEP() << std::endl;
}