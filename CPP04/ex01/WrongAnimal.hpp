/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:30:25 by snuts             #+#    #+#             */
/*   Updated: 2022/04/06 22:36:31 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string			_type;
public:
	WrongAnimal();
	WrongAnimal(const std::string & type);
	WrongAnimal(WrongAnimal const & other);

	WrongAnimal & operator = (const WrongAnimal & other);
	virtual ~WrongAnimal();
	
	void makeSound() const;
	std::string getType() const;
};

#endif