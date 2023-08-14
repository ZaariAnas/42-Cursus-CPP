/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 06:58:19 by azari             #+#    #+#             */
/*   Updated: 2023/08/08 12:02:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	
	int	value;
	static const int _FRAC_BIT_NUM;
public:

	Fixed();
	Fixed(const Fixed &F);
	~Fixed();

	Fixed	&operator=(const Fixed &F);
	int	getRawBits( void ) const;
	void setRawBits( int const raw );
	
};

#endif