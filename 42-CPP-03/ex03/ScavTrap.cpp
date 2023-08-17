/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:42:46 by azari             #+#    #+#             */
/*   Updated: 2023/08/17 09:38:54 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
  	std::cout << "ScavTrap \033[1;33m " << Name << "\033[0m Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
  	std::cout << "ScavTrap \033[1;33m " << Name << "\033[0m Destructor Called" << std::endl;
}

ScavTrap::ScavTrap()
{
  	std::cout << "ScavTrap \033[1;33m " << Name << "\033[0m Default Constructor Called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
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
void	ScavTrap::guardGate(void)
{
  	std::cout << "ScavTrap \033[1;33m " << Name << "\033[0m Is in Gate Keeper Mode" << std::endl;
}