/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:48:07 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 22:10:10 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	this->_type = "UnknownWrongDog";	
	std::cout << "Default WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const std::string & type)
{
	this->_type = type;
	std::cout << "Name WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog & other)
{
	*this = other;
	std::cout << "Copy WrongDog constructor called" << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog & WrongDog::operator = (const WrongDog & other)
{
	this->_type = other._type;
	return (*this);
}

void WrongDog::makeSound(void) const
{
	std::cout << _type << " makes Wuf" << std::endl;
}

