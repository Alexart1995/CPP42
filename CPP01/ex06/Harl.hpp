/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 21:48:02 by snuts             #+#    #+#             */
/*   Updated: 2022/04/02 16:35:27 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	enum _talk{
		_debug = 0,
		_info,
		_warning,
		_error,
		_notsagn = -1
		
	};
	void complain( std::string level );
	Harl(/* args */);
	~Harl();
};