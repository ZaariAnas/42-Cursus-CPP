/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:20:14 by azari             #+#    #+#             */
/*   Updated: 2023/08/12 12:39:29 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	
	int	_value;
	static const int _FRAC_BIT_NUM;
public:

	Fixed();
	Fixed(const	int x);
	Fixed(const	float x);
	Fixed(const Fixed &F);
	~Fixed();

	Fixed	&operator=(const Fixed &F);
	Fixed	operator+(const Fixed &F) const;
	Fixed	operator-(const Fixed &F) const;
	Fixed	operator*(const Fixed &F) const;
	Fixed	operator/(const Fixed &F) const;
	bool 	operator>(const Fixed &F) const;
	bool	operator<(const Fixed &F) const;
	bool	operator>=(const Fixed &F) const;
	bool	operator<=(const Fixed &F) const;
	bool	operator==(const Fixed &F) const;
	bool	operator!=(const Fixed &F) const;
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	
	int	getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static 	const Fixed &max(const Fixed &F1, const Fixed &F2);
	static	Fixed &max(Fixed &F1, Fixed &F2);
	static	const Fixed &min(const Fixed &F1, const Fixed &F2);
	static	Fixed &min(Fixed &F1, Fixed &F2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif