/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:41:57 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 22:41:24 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_H
#define WRONGDOG_H

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(const std::string & type);
	WrongDog(const WrongDog & other);
	
	WrongDog & operator = (const WrongDog & other);
	~WrongDog();

	void makeSound() const;
};

#endif