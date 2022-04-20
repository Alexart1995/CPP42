/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:48:29 by snuts             #+#    #+#             */
/*   Updated: 2022/04/07 17:53:22 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *br;
public:
	Cat();
	Cat(const std::string & type);
	Cat(const Cat & other);
	
	Cat & operator = (const Cat & other);
	~Cat();

	void makeSound() const;
};

#endif