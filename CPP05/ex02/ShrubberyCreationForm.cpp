/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:15:10 by snuts             #+#    #+#             */
/*   Updated: 2022/04/12 13:59:08 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string		ShrubberyCreationForm::_tree = 
"        x        \n"
"       xxx        \n"
"      xxxxx        \n"
"     xxxxxxx        \n"
"    xxxxxxxxx       \n"
"        x        \n"
"        x        \n"
"        x        \n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("SCF for " + target, 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : Form(other)
{
	_target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm & other)
{
	Form::operator=(other);
	_target = other._target;
	return (*this);
}

void 			ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	CheckExecution(executor);
	
	std::ofstream	ofs;
	std::string		filename;

	filename = _target + "_shrubbery";

	ofs.open(filename);
	if (!ofs.is_open())
		throw OpeningFileException();
	ofs << _tree;	
}