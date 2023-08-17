/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:37:56 by azari             #+#    #+#             */
/*   Updated: 2023/08/16 15:43:24 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CPP
# define SCAVTRAP_CPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap{

public:

	~ScavTrap();
	ScavTrap(std::string name);
	void	attack(const std::string& name);
	void	guardGate(void);
};

#endif