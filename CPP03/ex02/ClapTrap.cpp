/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:36:22 by snuts             #+#    #+#             */
/*   Updated: 2022/04/05 16:57:09 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("NoName"), _hitPoints (10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints (10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & other) : _name(other._name), _hitPoints (other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


ClapTrap ClapTrap::operator = (ClapTrap const & other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHP();
	this->_energyPoints = other.getEP();
	this->_attackDamage = other.getAD();
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAD() << " points of damage!" << std::endl;
		--_energyPoints;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " recieved " << amount << " points of damage! Ouch!" << std::endl;
		_hitPoints-=amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " healed " << amount << " points!" << std::endl;
		_hitPoints+=amount;
		--_energyPoints;
	}
}

std::string		ClapTrap::getName(void) const
{
	return(_name);
}

int				ClapTrap::getHP(void) const
{
	return(_hitPoints);	
}

int				ClapTrap::getEP(void) const
{
	return (_energyPoints);	
}
int				ClapTrap::getAD(void) const
{
	return(_attackDamage);
}


