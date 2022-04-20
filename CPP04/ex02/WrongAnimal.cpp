/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:33:43 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 22:33:49 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Unknown WrongAnimal")
{
	std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string & type) : _type(type)
{
	std::cout << "Default name constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & other)
{
	*this = other;
	std::cout << "Copy cWrongAnimal constructor called" << std::endl;
}



WrongAnimal & WrongAnimal::operator = (const WrongAnimal & other)
{
	this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << _type << " make sound "<< std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}