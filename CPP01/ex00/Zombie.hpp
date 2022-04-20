/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:28:37 by snuts             #+#    #+#             */
/*   Updated: 2022/03/31 14:19:31 by snuts            ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();
	void	announce(void);

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif