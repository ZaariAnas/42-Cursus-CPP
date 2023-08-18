/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:28:17 by azari             #+#    #+#             */
/*   Updated: 2023/08/18 06:44:32 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
  	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
  	std::cout << "DiamondTrap \033[1;33m" << Name << "\033[0m Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ScavTrap(), FragTrap()
{
  	std::cout << "DiamondTrap \033[1;33m" << Name << "\033[0m Constructor Called" << std::endl;
	this->Name = Name;
	ClapTrap::Name = Name.append("_clap_name");
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;
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
		std::string buffer;
		buffer = other.Name;
		this->Name = other.Name;
		ClapTrap::Name = buffer.append("_clap_name");
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\033[1;34mBOO\033[0m From DiamondTrap \033[1;33m" << Name;
	std::cout << "\033[0m ClapTrap \033[1;33m" << ClapTrap::Name << "\033[0m" << std::endl;
}
