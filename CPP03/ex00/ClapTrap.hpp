/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:33:58 by snuts             #+#    #+#             */
/*   Updated: 2022/04/05 16:42:28 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string.h>

class ClapTrap
{
private:
	std::string			_name;
	int					_hitPoints;
	int					_energyPoints;
	int					_attackDamage;
	
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & other);
	
	ClapTrap operator = (ClapTrap const & other);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	

	std::string		getName(void) const;
	int				getHP(void) const;
	int				getEP(void) const;
	int				getAD(void) const;
	
	~ClapTrap();
};

#endif