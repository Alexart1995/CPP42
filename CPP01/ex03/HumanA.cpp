/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:38:07 by snuts             #+#    #+#             */
/*   Updated: 2022/03/31 21:20:27 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void			HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}