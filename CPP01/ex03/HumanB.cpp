/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:38:30 by snuts             #+#    #+#             */
/*   Updated: 2022/04/02 17:08:07 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name(name), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void			HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
	else
	{
		std::cout << this->_name << " can attack only with hands" << std::endl;
	}
	
}

void			HumanB::setWeapon(Weapon &freshWeapon)
{
	if (freshWeapon.getType() == "")
	{
		this->weapon = nullptr;
	}
	else
	{
		this->weapon = &freshWeapon;
	}
}