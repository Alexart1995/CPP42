/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:18:06 by snuts             #+#    #+#             */
/*   Updated: 2022/04/03 21:18:24 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : data(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->data = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->data);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits called" << std::endl;
	data = raw;
}


