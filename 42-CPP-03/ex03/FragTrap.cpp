/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:13:44 by azari             #+#    #+#             */
/*   Updated: 2023/08/17 18:56:48 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
  	std::cout << "FragTrap \033[1;33m" << Name << "\033[0m Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
  	std::cout << "FragTrap \033[1;33m" << Name << "\033[0m Destructor Called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
  	std::cout << "FragTrap Default Constructor Called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
  	std::cout << "FragTrap \033[1;33m" << Name << "\033[0m High Fives Guys" << std::endl;
}
FragTrap	&FragTrap::operator=(FragTrap &other)
{
	std::cout << "FragTrap Assignment Operator Called" << std::endl;
	if (&other != this)
	{
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

FragTrap::FragTrap(FragTrap &other)
{
  	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	*this = other;
}
