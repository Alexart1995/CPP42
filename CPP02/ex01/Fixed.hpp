/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:16:48 by snuts             #+#    #+#             */
/*   Updated: 2022/04/04 15:46:48 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <math.h>
class Fixed
{
private:
	int					data;
	static const int	bits;
public:
	Fixed();
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const & src);
	~Fixed();
	
	Fixed & operator=(Fixed const & other);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif