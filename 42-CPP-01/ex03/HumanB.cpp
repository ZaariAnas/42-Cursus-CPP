/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:57:52 by azari             #+#    #+#             */
/*   Updated: 2023/08/06 17:01:40 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor called" << std::endl;
}

void	HumanB::attack() const
{
	if (!_w)
	{
		std::cout << "HumanB has no weapon" << std::endl;
		return;
	}
	std::cout 	<< _name
				<< " attacks with their "
				<< _w->getType()
				<< std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->_w = &w;
}
