/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:40:36 by snuts             #+#    #+#             */
/*   Updated: 2022/04/13 19:34:18 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef struct s_data
{
	int num;
}				Data;


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
};

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
};

int main()
{
	Data *d = new Data;
	d->num = 7;

	uintptr_t tmp = serialize(d);
	Data *dTmp = deserialize(tmp);

	std::cout << d << std::endl;
	std::cout << dTmp << std::endl;
}
