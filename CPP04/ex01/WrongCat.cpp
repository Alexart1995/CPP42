/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:54:32 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 22:10:03 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "UnknownWrongCat";	
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string & type)
{
	this->_type = type;
	std::cout << "Name WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & other)
{
	*this = other;
	std::cout << "Copy WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator = (const WrongCat & other)
{
	this->_type = other._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << _type << " makes Meow" << std::endl;
}