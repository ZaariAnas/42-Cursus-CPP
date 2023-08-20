/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:47:39 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 16:47:40 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("")
{
    std::cout << "* an AMateria was Born *" << std::endl;
}

AMateria::AMateria( std::string const & type )  : _type(type)
{
    std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria( AMateria const & src )
{
    *this = src;
}

AMateria::~AMateria( void )
{
    std::cout << "an " << this->_type << " was Destroyed" << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

