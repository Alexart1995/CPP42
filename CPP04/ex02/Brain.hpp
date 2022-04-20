/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:51:08 by snuts             #+#    #+#             */
/*   Updated: 2022/04/07 18:17:36 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>
class Brain
{
protected:
	std::string		ideas[100];
public:
	Brain();
	Brain(const Brain & other);

	Brain & operator = (const Brain & other);
	~Brain();
};

#endif