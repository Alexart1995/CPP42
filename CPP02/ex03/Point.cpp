/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:59:56 by snuts             #+#    #+#             */
/*   Updated: 2022/04/04 19:04:50 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0) , y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(float x, float y) : x(x) , y(y)
{
	// std::cout << "Float constructor called" << std::endl;
}

Point::Point(Point const & src) : x(src.x), y(src.y)
{
	
}
Point::~Point()
{
	// std::cout << "Distructor called" << std::endl;
}

Point & Point::operator = (Point const & other)
{
	x.setRawBits(other.x.getRawBits());
	y.setRawBits(other.y.getRawBits());
	return (*this);
}

float Point::getXvalue() const
{
	return (x.toFloat());
}

float Point::getYvalue() const
{
	return (y.toFloat());
}



