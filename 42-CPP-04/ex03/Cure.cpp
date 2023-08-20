/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:47:56 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 16:47:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    std::cout << "* A Cure Materia was Born*" << std::endl;
}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
    *this = src;
    std::cout << "* A Cure Materia was Copied *" << std::endl;
}

Cure&   Cure::operator=( const Cure& rhs ) {
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Cure::~Cure()
{
    std::cout << "* A Cure Materia was Destroyed *" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


