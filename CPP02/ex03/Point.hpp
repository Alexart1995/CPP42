/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:59:49 by snuts             #+#    #+#             */
/*   Updated: 2022/04/04 18:39:12 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	/* data */
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(float x, float y);
	Point(Point const & src);
	Point & operator = (Point const & other);
	float getXvalue() const;
	float getYvalue() const;
	
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif