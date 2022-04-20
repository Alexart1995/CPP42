/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:53:50 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 15:22:18 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"

class Intern
{
private:
	/* data */
public:
	Intern();
	Intern(const Intern & other);
	~Intern();

	Intern & operator = (const Intern & other);

	Form *makeForm(std::string FormType, std::string target);
};

#endif