/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:48:07 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 22:10:10 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "UnknownDog";	
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const std::string & type)
{
	this->_type = type;
	std::cout << "Name Dog constructor called" << std::endl;
}

Dog::Dog(const Dog & other)
{
	*this = other;
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator = (const Dog & other)
{
	this->_type = other._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << _type << " makes Wuf" << std::endl;
}

