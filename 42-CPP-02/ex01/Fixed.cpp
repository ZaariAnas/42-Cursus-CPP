/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:44:31 by azari             #+#    #+#             */
/*   Updated: 2023/08/09 13:34:35 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &F)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = F;
}

Fixed::Fixed(const int value) : _value(value * (1 << _FRAC_BIT_NUM))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _FRAC_BIT_NUM)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed  &F)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&F != this)
		this->_value = F.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int value)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = value;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_value / (1 << _FRAC_BIT_NUM));
}

int	Fixed::toInt( void ) const
{
	return (roundf(_value / (1 << _FRAC_BIT_NUM)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	
	os << fixed.toFloat();
	return os;
}
