/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:36:04 by snuts             #+#    #+#             */
/*   Updated: 2022/03/31 21:26:12 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string.h>

class Weapon
{
private:
	std::string		_type;
public:
	Weapon(std::string type);
	~Weapon();
	
	const std::string		&getType(void) const;
	void					setType(std::string type);
};

#endif 