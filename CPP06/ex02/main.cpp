/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:45:51 by snuts             #+#    #+#             */
/*   Updated: 2022/04/13 20:24:30 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
	srand(time(NULL));

	int x;
	x = rand() % 3;
	switch (x)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	}
	return (NULL);
};

void identify(Base* p)
{
	A *a;
	if ((a = dynamic_cast<A *> (p)))
	{
		std::cout << "It's class A" << std::endl;
		return;
	}
	B *b;
	if ((b = dynamic_cast<B *> (p)))
	{
		std::cout << "It's class B" << std::endl;
		return;
	}
	C *c;
	if ((c = dynamic_cast<C *> (p)))
	{
		std::cout << "It's class C" << std::endl;
		return;
	}
};

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &> (p);
		std::cout << "It's class A" << std::endl;
		(void) a;
		return;
	}
	catch(const std::exception& e){}
	
	try
	{
		B &b = dynamic_cast<B &> (p);
		std::cout << "It's class B" << std::endl;
		(void) b;
		return;
	}
	catch(const std::exception& e){}

	try
	{
		C &c = dynamic_cast<C &> (p);
		std::cout << "It's class C" << std::endl;
		(void) c;
		return;
	}
	catch(const std::exception& e){}
}

int main ()
{
	Base * ptr;
	ptr = generate();
	identify(ptr);

	identify(*ptr);

	return 0;
	
}