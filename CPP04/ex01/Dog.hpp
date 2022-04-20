/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:41:57 by snuts             #+#    #+#             */
/*   Updated: 2022/04/07 18:47:57 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private:
	Brain *br;
public:
	Dog();
	Dog(const std::string & type);
	Dog(const Dog & other);
	
	Dog & operator = (const Dog & other);
	~Dog();

	void makeSound() const;
};

#endif