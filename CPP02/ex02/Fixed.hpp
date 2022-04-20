/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:16:48 by snuts             #+#    #+#             */
/*   Updated: 2022/04/04 17:05:32 by snuts            ###   ########.fr       */
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

	Fixed & operator = (Fixed const & other);
	Fixed   operator + (Fixed const & rhs) const;
	Fixed   operator * (Fixed const & rhs) const;
	Fixed   operator / (Fixed const & rhs) const;
	Fixed   operator - (Fixed const & rhs) const;

	Fixed  & operator ++ ();
	Fixed   operator ++ (int);
	Fixed  & operator -- ();
	Fixed   operator -- (int);

	bool   operator > (Fixed const & rhs) const;
	bool   operator >= (Fixed const & rhs) const;
	bool   operator < (Fixed const & rhs) const;
	bool   operator <= (Fixed const & rhs) const;
	bool   operator == (Fixed const & rhs) const;
	bool   operator != (Fixed const & rhs) const;

	static Fixed	&min(Fixed &first, Fixed &second); 
	static Fixed	&max(Fixed &first, Fixed &second);
	static const Fixed	&min(const Fixed &first,const Fixed &second); 
	static const Fixed	&max(const Fixed &first,const Fixed &second); 
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif