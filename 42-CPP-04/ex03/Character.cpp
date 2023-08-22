/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:20:29 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 14:43:39 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const &Character::getName() const {return this->name;}
Character::Character(std::string cname) : name(cname)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	// std::cout << "An Character Was Born" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	// std::cout << "A Character Was Destroyed" << std::endl;
}

Character::Character(Character &other)
{
	// std::cout << "A Character Was Copied" << std::endl;
	*this = other;
}

Character &Character::operator=(Character &other)
{
	if (this != &other)
	{
		this->name = other.getName();
		for(int i = 0; i < 4; i++)
				this->_inventory[i] = (other._inventory[i])->clone();
	}
	return *this;
}

void	Character::equip(AMateria *m)
{
	int i;
	if (!m)
	{
		std::cout << "can't equip empty Materia" << std::endl;
		return;
	}
	for (i = 0; i < 4; i++)
		if (!this->_inventory[i])
			break ;
	if (i < 4)
	{
		this->_inventory[i] = m;
		std::cout << this->getName() << " Equiped an " << m->getType() << " AMateria" << std::endl;
	}
	else
	std::cout << this->getName() << " Has a Full Inventory" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		std::cout << this->getName() << " Unequiped an AMateria" << std::endl;
		return ;
	}
	std::cout << this->getName() << " Can't unequip AMateria [" << idx << "]" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx] && idx < 4 && idx >= 0)
		this->_inventory[idx]->use(target);
	else
	std::cout << this->getName() << " Can't use AMateria [" << idx << "]" << std::endl;
}
