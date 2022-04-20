/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 22:33:27 by snuts             #+#    #+#             */
/*   Updated: 2022/04/16 17:19:17 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
private:
	std::vector<int>	nums;
	int					len;
	int					curInd;
	
public:
	Span();
	Span(unsigned int n);
	Span(const Span & other);
	Span & operator = (const Span & other);
	~Span();

	void		addNumber(int num);
	void		addWithIters(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int			shortestSpan() const;
	int			longestSpan() const;
	
	class DistanceException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Span is too small to count distance");	
			}
	};

	class FullSpanException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Span is full");
			}
	};
};


#endif