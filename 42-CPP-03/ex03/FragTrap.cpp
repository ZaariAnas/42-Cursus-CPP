/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:13:44 by azari             #+#    #+#             */
/*   Updated: 2023/08/17 15:12:06 by azari            ###   ########.fr       */
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

void FragTrap::attack(const std::string& target)
{
	ClapTrap::attack(target);
}
void	FragTrap::highFivesGuys(void)
{
  	std::cout << "FragTrap \033[1;33m " << Name << "\033[0m High Fives Guys" << std::endl;
}