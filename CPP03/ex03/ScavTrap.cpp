/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:47:43 by snuts             #+#    #+#             */
/*   Updated: 2022/04/05 18:39:01 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "NoName";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ST default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ST name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHP();
	this->_energyPoints = other.getEP();
	this->_attackDamage = other.getAD();
	std::cout << "ST copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ST destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHP();
	this->_energyPoints = other.getEP();
	this->_attackDamage = other.getAD();	
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " in Gate keeper mode" << std::endl; 
}

void	ScavTrap::attack(std::string const & target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAD() << " points of damage!" << std::endl;
		--_energyPoints;
	}
}
