/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:54:32 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 22:10:03 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "UnknownCat";	
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const std::string & type)
{
	this->_type = type;
	std::cout << "Name Cat constructor called" << std::endl;
}

Cat::Cat(const Cat & other)
{
	*this = other;
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator = (const Cat & other)
{
	this->_type = other._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << _type << " makes Meow" << std::endl;
}