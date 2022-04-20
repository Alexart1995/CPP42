/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:00:17 by snuts             #+#    #+#             */
/*   Updated: 2022/04/04 18:54:32 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int count;

	count = 0;

	if (((a.getXvalue() - point.getXvalue()) * (b.getYvalue() - a.getYvalue()) 
		- ((b.getXvalue() - a.getXvalue()) * (a.getYvalue() - point.getYvalue()))) > 0)
		count++;
	if (((b.getXvalue() - point.getXvalue()) * (c.getYvalue() - b.getYvalue()) 
		- ((c.getXvalue() - b.getXvalue()) * (b.getYvalue() - point.getYvalue()))) > 0)
		count++;
	if (((c.getXvalue() - point.getXvalue()) * (a.getYvalue() - c.getYvalue()) 
		- ((a.getXvalue() - c.getXvalue()) * (c.getYvalue() - point.getYvalue()))) > 0)
		count++;
	
	if (count == 0 || count == 3)
		return (true);
	return (false);
}