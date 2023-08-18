/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:13:31 by azari             #+#    #+#             */
/*   Updated: 2023/08/18 06:25:27 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap \033[1;33m" << Name << "\033[0m Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "ClapTrap \033[1;33m" << Name << "\033[0m Constructor Called" << std::endl;
	this->Name = Name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &C)
{
	std::cout << "ClapTrap \033[1;33m" << Name << "\033[0mCopy Constructor Called" << std::endl;
	*this = C;
}

std::string ClapTrap::getName(void)
{
	return (this->Name);
}
ClapTrap &ClapTrap::operator=(ClapTrap &C)
{
	std::cout << "Assignment Operator Called" << std::endl;
	if (&C != this)
	{
		this->Name = C.getName();
		this->HitPoints = C.HitPoints;
		this->EnergyPoints = C.EnergyPoints;
		this->AttackDamage = C.AttackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cerr << "error: empty strings not allowed" << std::endl;
		return;
	}
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ClapTrap \033[1;33m" << Name << "\033[0mis out of Energy Points" << std::endl;
		return;
	}
	std::cout << "ClapTrap \033[1;33m" << Name << " \033[0mattacks \033[1;35m" << target << "\033[0m";
	std::cout << ", causing " << AttackDamage << " points of damage !" << std::endl;
	EnergyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((unsigned int)HitPoints <= amount)
	{
		std::cout << "ClapTrap \033[1;33m" << Name << " \033[0mis dead " << std::endl;
		return;
	}
	std::cout << "ClapTrap \033[1;33m" << Name << " \033[0mtakes " << amount << "points of damage !";
	HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
 	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " \033[0mis out of Energy Points " << std::endl;
		return;
	}
	std::cout << "ClapTrap \033[1;33m" << Name << " \033[0mgets repaired " << amount << "points of reparation !" << std::endl;
	EnergyPoints -= 1;
	HitPoints += amount;
}
