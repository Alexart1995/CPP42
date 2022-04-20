/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:33:43 by snuts             #+#    #+#             */
/*   Updated: 2022/04/07 19:04:28 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unknown animal")
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(const std::string & type) : _type(type)
{
	std::cout << "Default name constructor called" << std::endl;
}

Animal::Animal(Animal const & other)
{
	*this = other;
	std::cout << "Copy cAnimal constructor called" << std::endl;
}



Animal & Animal::operator = (const Animal & other)
{
	this->_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal " << _type << " make sound "<< std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}