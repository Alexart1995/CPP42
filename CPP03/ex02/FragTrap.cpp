/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:07:36 by snuts             #+#    #+#             */
/*   Updated: 2022/04/05 21:19:57 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "Noname";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHP();
	this->_energyPoints = other.getEP();
	this->_attackDamage = other.getAD();
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHP();
	this->_energyPoints = other.getEP();
	this->_attackDamage = other.getAD();	
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << getName() << " gives everebody highfive!" << std::endl;
}