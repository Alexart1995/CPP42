/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:14:12 by snuts             #+#    #+#             */
/*   Updated: 2022/04/13 21:47:46 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{

}

Convert::~Convert()
{
	
}

int Convert::is_nan(const std::string& line) const
{

	if (line == "inf" || line == "inff" || line == "-inf"
	|| line == "+inf" || line == "-inff" || line == "+inff"
	|| line == "nan" || line == "nanf")
		return (1);
	return (0);
}

void	Convert::parse(char *str)
{
	int			i;
	int			dotCount;
	int			fCount;
		
	if (!str || !*str)
		throw EmptyInputException();
	if (!str[1] && !ft_isdigit(str[0]))
		return ;
	if (is_nan(str) == 1)
		return;
	i = 0;
	dotCount = 0;
	fCount = 0;
	
	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; str[i]; i++)
	{
		if (str[i] == '.')
			dotCount++;
		if (str[i] == 'f')
			fCount++;
		if(dotCount > 1 || fCount > 1 || (!isdigit(str[i]) && str[i] != 'f' && str[i] != '.'))
			throw NonNumericException();
			
	}
	
	// value = atof(str);
}

void	Convert::ConvertStr(char *str)
{
	parse(str);
	value = atof(str);
}

bool	Convert::ft_isdigit(int c) const
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}


void	Convert::printValue(std::string str)
{
	long long int tmpi;
	
	// printf("%f", value);
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		std::cout << "char: '" << str[0] << "'" << std::endl;
	}
	else if (value < 0 || value > 127 || isnan(value))
		std::cout << "char: Impossible" << std::endl;
	else if (value < 32 || value > 126)
		std::cout << "char: Not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;

	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		tmpi = static_cast<int>(str[0]);
		std::cout << "int: " << tmpi << std::endl;
	}
	else if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int: " << "Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;


	float	tmpf;
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		tmpf = static_cast<float>(str[0]);
		std::cout << "float: " << tmpf;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(value);
	}
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	double	tmpd;
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		tmpd = static_cast<float>(str[0]);
		std::cout << "double: " << tmpd;
	}
	else
		std::cout << "double: " << static_cast<double>(value);
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}
