/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:46:56 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 16:46:58 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

class AMateria;
class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif