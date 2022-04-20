/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:54:32 by snuts             #+#    #+#             */
/*   Updated: 2022/04/07 18:26:33 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	br = new Brain;
	this->_type = "UnknownCat";	
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const std::string & type) : Animal(type)
{
	br = new Brain;
	std::cout << "Name Cat constructor called" << std::endl;
}

Cat::Cat(const Cat & other) : Animal(other)
{
	br = new Brain;
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete br;
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator = (const Cat & other)
{
	Animal::operator=(other);
	delete br;
	br = new Brain;
	br->operator=(*other.br);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << _type << " makes Meow" << std::endl;
}