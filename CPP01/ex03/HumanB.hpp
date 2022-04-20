/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:38:19 by snuts             #+#    #+#             */
/*   Updated: 2022/03/31 21:48:55 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
class HumanB
{
private:
	std::string 	_name;
	Weapon			*weapon;
	/* data */
public:
	HumanB(std::string name);
	~HumanB();
	void			attack(void);
	void			setWeapon(Weapon &freshWeapon);
	
};

#endif 