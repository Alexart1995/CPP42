/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:33:44 by snuts             #+#    #+#             */
/*   Updated: 2022/04/05 21:34:23 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{



	std::cout << "Clap Trap called" << std::endl;
	{
		ScavTrap x;
		ScavTrap alex ("Alex");
		ScavTrap life ("Life");
		life.attack("Alex");
		std::cout << "HP = " << life.getHP() << "; EP = " << life.getEP() << std::endl;
		alex.takeDamage(1);
		std::cout << "HP = " << alex.getHP() << "; EP = " << alex.getEP() << std::endl;
		alex.beRepaired(1);
		std::cout << "HP = " << alex.getHP() << "; EP = " << alex.getEP() << std::endl;
	}
	
	std::cout << "Frag Trap called" << std::endl;
	{
		FragTrap frag;

		FragTrap trap ("Zaq");
		FragTrap part ("Qwerty");
		trap.attack("Qwerty");
		std::cout << trap.getEP() << std::endl;
		part.takeDamage(30);
		std::cout << "HP = " << part.getHP() << "; EP = " << part.getEP() << std::endl;
		part.beRepaired(22);
		std::cout << "HP = " << part.getHP() << "; EP = " << part.getEP() << std::endl;
		part.highFivesGuys();

		FragTrap Jim(part);
		std::cout << "HP = " << Jim.getHP() << "; EP = " << Jim.getEP() << std::endl;
		FragTrap Jane = Jim;
		
		Jane.highFivesGuys();
		Jane.beRepaired(7);
		std::cout << "HP = " << Jane.getHP() << "; EP = " << Jane.getEP() << std::endl;
	}
}