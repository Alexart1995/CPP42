/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:45:59 by snuts             #+#    #+#             */
/*   Updated: 2022/04/16 17:40:08 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : len(0), curInd(0)
{
	
}

Span::Span(unsigned int n) : len(n), curInd(0)
{
	
}

Span::Span(const Span & other)
{
	len = other.len;
	nums = other.nums;
	curInd = other.curInd;
}

Span & Span::operator = (const Span & other)
{
	len = other.len;
	nums = other.nums;
	curInd = other.curInd;
	
	return (*this);
}

void		Span::addNumber(int num)
{
	if (curInd >= len)
		throw FullSpanException();
	
	nums.push_back(num);
	++curInd;
}

void		Span::addWithIters(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (curInd >= len)
		throw FullSpanException();
	
	for (; begin != end; ++begin)
	{
		nums.push_back(*begin);
		++curInd;
	}
}

int			Span::shortestSpan() const
{
	int min;
	
	if (nums.size() < 2)
		throw DistanceException();
	std::vector<int> tmp = nums;
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::iterator	it;
	
	for (it = tmp.begin() + 1, min = *it - *(it - 1); it < tmp.end() - 1; ++it)
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	return min;
}

int			Span::longestSpan() const
{
	if (nums.size() < 2)
		throw DistanceException();
	
	std::vector<int> tmp = nums;
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

Span::~Span()
{
	
}