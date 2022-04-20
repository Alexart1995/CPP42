/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:11:11 by snuts             #+#    #+#             */
/*   Updated: 2022/04/14 18:56:30 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"


// int main() {

// 	Array<int>			intArray;
// 	Array<std::string>	stringArray(10);
// 	Array<std::string>	otherStringArray;

// 	stringArray[0] = "Hi";
// 	stringArray[1] = "Hello";
// 	stringArray[2] = "How are you?";
// 	stringArray[3] = "Fine and you?";
// 	stringArray[4] = "Doing great thanks!";
// 	stringArray[5] = "You're very welcome";

// 	std::cout << "intArray.size() = " << intArray.size() << std::endl;
// 	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;

// 	otherStringArray = stringArray;
// 	otherStringArray[3] = "I'm good, how about you?";

// 	try {

// 		std::cout << stringArray[59] << std::endl;
// 	}
// 	catch (std::exception &e) {

// 		std::cout << e.what() << std::endl;
// 	}

// 	try {

// 		std::cout << otherStringArray[-3] << std::endl;
// 	}
// 	catch (std::exception &e) {

// 		std::cout << e.what() << std::endl;
// 	}

// 	try {

// 		std::cout << "stringArray:" << std::endl << std::endl;
// 		for (int i = 0; i < stringArray.size(); i++)
// 			std::cout << stringArray[i] << std::endl;

// 		std::cout << "otherStringArray:" << std::endl << std::endl;
// 		for (int i = 0; i < otherStringArray.size(); i++)
// 			std::cout << otherStringArray[i] << std::endl;
// 	}
// 	catch (std::exception &e) {
		
// 		std::cout << e.what() << std::endl;
// 	}
// 	return 0;
// }

#define MAX_VAL 20
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
		std::cout << numbers[i] << std::endl;
    }
    delete [] mirror;//
    return 0;
}