/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 09:04:22 by azari             #+#    #+#             */
/*   Updated: 2023/08/05 13:05:15 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &F)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = F;
}

Fixed	&Fixed::operator=(const Fixed  &F)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&F != this)
		this->value = F.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int value)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = value;
}
