/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:39:47 by azari             #+#    #+#             */
/*   Updated: 2023/08/01 14:07:24 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _name(name), _w(w)
{
	std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor called" << std::endl;
}

void	HumanA::attack() const
{
	std::cout 	<< _name
				<< " attacks with their "
				<< _w.getType()
				<< std::endl;
}
