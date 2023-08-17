/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:13:44 by azari             #+#    #+#             */
/*   Updated: 2023/08/17 10:14:21 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
ç
}

FragTrap::~FragTrap()
{
  	std::cout << "FragTrap \033[1;33m " << Name << "\033[0m Destructor Called" << std::endl;
}

FragTrap::FragTrap()
{
  	std::cout << "FragTrap \033[1;33m " << Name << "\033[0m Default Constructor Called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cerr << "error: empty strings not allowed" << std::endl;
		exit(1);
	}
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ClapTrap \033[1;33m" << Name << " \033[0mis out of Energy Points" << std::endl;
		return;
	}
	std::cout << "ClapTrap \033[1;33m" << Name << " \033[0mattacks \033[1;35m" << target << "\033[0m";
	std::cout << ", causing " << AttackDamage << " points of damage !" << std::endl;
	EnergyPoints -= 1;
}
void	FragTrap::highFivesGuys(void)
{
  	std::cout << "FragTrap \033[1;33m " << Name << "\033[0m High Fives Guys" << std::endl;
}