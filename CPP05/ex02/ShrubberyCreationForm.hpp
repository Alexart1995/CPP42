/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:51:53 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 13:58:16 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_H
#define SHRUBERRYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string						_target;
	static std::string				_tree;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & other);
	~ShrubberyCreationForm();
	
	class OpeningFileException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Error opening file");
			}
			
	};
	
	ShrubberyCreationForm & operator = (const ShrubberyCreationForm & other);

	void 			execute(Bureaucrat const & executor) const;
};

#endif