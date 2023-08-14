/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:20:21 by azari             #+#    #+#             */
/*   Updated: 2023/08/09 16:38:48 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
const int	Fixed::_FRAC_BIT_NUM = 8;

Fixed::Fixed() : _value(0)
{

}
Fixed::Fixed(const Fixed &F)
{
	*this = F;
}

Fixed::Fixed(const int value) : _value(value << _FRAC_BIT_NUM)
{

}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _FRAC_BIT_NUM)))
{

}

Fixed	&Fixed::operator=(const Fixed  &F)
{
	if (&F != this)
		this->_value = F.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{

}

int	Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int value)
{
	this->_value = value;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(_value) / (1 << _FRAC_BIT_NUM));
}

int	Fixed::toInt( void ) const
{
	return (_value >> _FRAC_BIT_NUM);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

bool	Fixed::operator>(const Fixed &F) const
{
	return (this->_value > F.getRawBits());
}

bool	Fixed::operator<(const Fixed &F) const
{
	return (this->_value < F.getRawBits());
}

bool	Fixed::operator<=(const Fixed &F) const
{
	return (this->_value <= F.getRawBits());
}

bool	Fixed::operator>=(const Fixed &F) const
{
	return (this->_value >= F.getRawBits());
}

bool	Fixed::operator==(const Fixed &F) const
{
	return (this->_value == F.getRawBits());
}

bool	Fixed::operator!=(const Fixed &F) const
{
	return (this->_value != F.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &F) const
{
	Fixed obj;

	obj.setRawBits(this->_value + F.getRawBits());
	return (obj);
}

Fixed	Fixed::operator-(const Fixed &F) const
{
	Fixed obj;

	obj.setRawBits(this->_value - F.getRawBits());
	return (obj);
}

Fixed	Fixed::operator*(const Fixed &F) const
{
	Fixed obj;

	obj.setRawBits((this->_value * F.getRawBits()) / (1 << _FRAC_BIT_NUM));
	return (obj);
}

Fixed	Fixed::operator/(const Fixed &F) const
{
	Fixed obj;
	if (!F.getRawBits())
	{
		std::cerr << "division by zero is undefined" << std::endl;
		exit(1);
	}
	obj.setRawBits((this->_value / F.getRawBits()) * (1 << _FRAC_BIT_NUM));
	return (obj);
}

Fixed Fixed::operator++(int)
{
	Fixed obj(*this);

	this->_value++;
	return (obj);
}

Fixed Fixed::operator--(int)
{
	Fixed obj(*this);

	this->_value--;
	return (obj);
}

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	&Fixed::min(Fixed &F1, Fixed &F2)
{
	if (F1.getRawBits() > F2.getRawBits())
		return (F2);
	return (F1);
}

Fixed	&Fixed::max(Fixed &F1, Fixed &F2)
{
	if (F1.getRawBits() < F2.getRawBits())
		return (F2);
	return (F1);
}

const Fixed	&Fixed::min(const Fixed &F1, const Fixed &F2)
{
	if (F1.getRawBits() > F2.getRawBits())
		return (F2);
	return (F1);
}

const Fixed	&Fixed::max(const Fixed &F1, const Fixed &F2)
{
	if (F1.getRawBits() < F2.getRawBits())
		return (F2);
	return (F1);
}