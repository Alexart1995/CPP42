/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:33:44 by snuts             #+#    #+#             */
/*   Updated: 2022/04/05 19:22:02 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	ClapTrap x;
	ClapTrap alex ("Alex");
	ClapTrap life ("Life");

	ScavTrap nekto;

	ScavTrap Zombie ("Nikolay");
	ScavTrap enemy ("Sprut");
	

	life.attack("Alex");
	std::cout << "HP = " << life.getHP() << "; EP = " << life.getEP() << std::endl;
	alex.takeDamage(1);
	std::cout << "HP = " << alex.getHP() << "; EP = " << alex.getEP() << std::endl;
	alex.beRepaired(1);

	std::cout << "HP = " << alex.getHP() << "; EP = " << alex.getEP() << std::endl;

	Zombie.attack("Sprut");
	std::cout << Zombie.getEP() << std::endl;
	enemy.takeDamage(20);
	std::cout << "HP = " << enemy.getHP() << "; EP = " << enemy.getEP() << std::endl;
	enemy.beRepaired(15);
	std::cout << "HP = " << enemy.getHP() << "; EP = " << enemy.getEP() << std::endl;
	enemy.guardGate();
}