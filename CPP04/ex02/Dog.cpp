/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:48:07 by snuts             #+#    #+#             */
/*   Updated: 2022/04/07 18:51:38 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	br = new Brain;
	this->_type = "UnknownDog";	
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const std::string & type)
{
	br = new Brain;
	this->_type = type;
	std::cout << "Name Dog constructor called" << std::endl;
}

Dog::Dog(const Dog & other) : Animal(other)
{
	br = new Brain;
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete br;
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator = (const Dog & other)
{
	Animal::operator=(other);
	delete br;
	br = new Brain;
	br->operator=(*other.br);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << _type << " makes Wuf" << std::endl;
}

