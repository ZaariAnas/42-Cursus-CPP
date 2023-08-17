/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:13:28 by azari             #+#    #+#             */
/*   Updated: 2023/08/16 13:26:36 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{

	std::string Name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;
public:

	ClapTrap(std::string Name);
	ClapTrap(ClapTrap &C);
	ClapTrap();
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap &operator=(ClapTrap &C);
	std::string getName(void);
};

#endif