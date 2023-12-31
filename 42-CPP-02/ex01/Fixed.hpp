/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:45:07 by azari             #+#    #+#             */
/*   Updated: 2023/08/07 13:44:59 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	
	int	_value;
	static const int _FRAC_BIT_NUM = 8;
public:

	Fixed();
	Fixed(const	int x);
	Fixed(const	float x);
	Fixed(const Fixed &F);
	~Fixed();

	Fixed	&operator=(const Fixed &F);
	int	getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif