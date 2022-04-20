/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:13:22 by snuts             #+#    #+#             */
/*   Updated: 2022/04/13 21:42:48 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <math.h>
#include <limits>
#include <stdlib.h>

class Convert
{

protected:
	double		value;
public:
	Convert();
	~Convert();
	int is_nan(const std::string& line) const;
	void	ConvertStr(char *str);
	void	parse(char *str);
	bool	ft_isdigit(int c) const;
	void	printValue(std::string str);
	class EmptyInputException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("Empty input");
		}
	};

	class NonNumericException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("Not number or letter");
		}
	};
};

#endif
