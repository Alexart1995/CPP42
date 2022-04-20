/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:11:29 by snuts             #+#    #+#             */
/*   Updated: 2022/04/14 18:50:55 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	int		_size;
	T		*arr;
public:
	Array() : _size(0), arr(NULL) {}
	
	Array(unsigned int n) : _size(n)
	{
		if (n < 0)
			throw OutOfBoundsException();
		arr = new T[n];
	}
	Array(const Array & other)
	{
		_size = other.size();
		arr = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			arr[i] = other[i];
		}
	}

	Array & operator = (const Array & other)
	{
		delete [] arr;
		_size = other.size();
		arr = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			arr[i] = other[i];
		}
		return (*this);		
	}

	T &operator[](const int index) const
	{
		if (index < 0 || index >= _size)
			throw  OutOfBoundsException();
		return arr[index];
	}

	class OutOfBoundsException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Out of bounds");	
			}
	};
	
	int size(void) const {return _size;}
	~Array(){delete []arr;}
};

#endif