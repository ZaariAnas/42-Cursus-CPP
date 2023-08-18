/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:37:56 by azari             #+#    #+#             */
/*   Updated: 2023/08/18 06:18:44 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CPP
# define SCAVTRAP_CPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap{

public:

	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &other);
	void	attack(const std::string& name);
	void	guardGate(void);
	ScavTrap	&operator=(ScavTrap &other);
};

#endif