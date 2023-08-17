/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:18:15 by azari             #+#    #+#             */
/*   Updated: 2023/08/17 10:24:34 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
# define DIAMONDTRAP_CPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap: public FragTrap, public ScavTrap{

	std::string Name;
public:

	~DiamondTrap();
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &other);
	DiamondTrap	&operator=(DiamondTrap &other);
	void	attack(const std::string& name);
	void	highFivesGuys(void);
};

#endif