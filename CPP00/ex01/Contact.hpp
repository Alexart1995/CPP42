/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:24:01 by snuts             #+#    #+#             */
/*   Updated: 2022/03/29 18:10:49 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <string>

class Contact
{
private:
	
	std::string		fields[5];
	std::string		info[5];

	enum field {
		FirstName,
		LastName,
		Nickname,
		PhoneNumber,
		DarkestSecret
	};
	
public:
	int				right_acc;
	Contact();
	~Contact();
	void 	set_info(void);
	void	show_info(void);
	void	show_contact(void);
	
};


#endif