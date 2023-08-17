/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:28:17 by azari             #+#    #+#             */
/*   Updated: 2023/08/17 10:31:01 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
  	std::cout << "DiamondTrap \033[1;33m " << Name << "\033[0m Default Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
  	std::cout << "DiamondTrap \033[1;33m " << Name << "\033[0m Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ScavTrap(), FragTrap()
{
  	std::cout << "DiamondTrap \033[1;33m " << Name << "\033[0m Constructor Called" << std::endl;
	this->Name = Name;
	ClapTrap::Name = Name.append("_clap_name");
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
  	std::cout << "DiamondTrap \033[1;33m " << Name << "\033[0m Copy Constructor Called" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &other)
{
  	std::cout << "DiamondTrap \033[1;33m " << Name << "\033[0m Copy Assignment Operator Called" << std::endl;
	if (&other != this)
	{
		this->Name = 
	}
	return (*this);
}