/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:24:08 by snuts             #+#    #+#             */
/*   Updated: 2022/03/29 21:17:34 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
class PhoneBook
{
private:
	/* data */
	int		amount;
	int		index;
	Contact contacts[8];
public:
	
	void	search_contact(void);
	void	add_contact(void);
	PhoneBook();
	~PhoneBook();
};

#endif