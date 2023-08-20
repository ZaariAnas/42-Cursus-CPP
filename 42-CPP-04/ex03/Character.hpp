/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:47:53 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 16:47:54 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

private:
    std::string _name;
    AMateria    *_inventory[4];

public:
    Character(std::string const &name);
    Character(Character const &src);
    ~Character();

    Character&          operator=(Character const &rhs);

    std::string const&  getName() const;
    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter& target);
};

#endif