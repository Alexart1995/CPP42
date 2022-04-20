/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:48:50 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 16:59:08 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap ()
{
	FragTrap ft;
	ScavTrap st;

	this->_name = "NoName";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = ft.getHP();
	_energyPoints = st.getEP();
	_attackDamage = ft.getAD();
	std::cout << "Name DT constructor called" << std::endl;
}

DiamondTrap::DiamondTrap (const std::string &name)
{
	FragTrap ft;
	ScavTrap st;

	this->_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = ft.getHP();
	_energyPoints = st.getEP();
	_attackDamage = ft.getAD();
	std::cout << "Name DT constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & other)
{
	*this = other;
	std::cout << "Copy DT constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap & other)
{
	_name = other._name;
	// ClapTrap::_name = other._name + "_clap_name";
	
	_hitPoints = other.getHP();
	_energyPoints = other.getEP();
	_attackDamage = other.getAD();
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DT destructor called" << std::endl;
}
