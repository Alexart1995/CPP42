/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:37:32 by snuts             #+#    #+#             */
/*   Updated: 2022/03/31 21:15:05 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
class HumanA
{
private:
	std::string 	_name;
	Weapon			&weapon;
	/* data */
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void			attack(void);
};

#endif 