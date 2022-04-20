/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:28:37 by snuts             #+#    #+#             */
/*   Updated: 2022/03/31 20:16:35 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie();
	~Zombie();
	void	announce(void);
	std::string	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );


#endif