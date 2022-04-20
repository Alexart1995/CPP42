/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:30:25 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 22:05:45 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string			_type;
public:
	Animal();
	Animal(const std::string & type);
	Animal(Animal const & other);

	Animal & operator = (const Animal & other);
	virtual ~Animal();
	
	virtual void makeSound() const;
	std::string getType() const;
};

#endif