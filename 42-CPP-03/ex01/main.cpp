/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:13:23 by azari             #+#    #+#             */
/*   Updated: 2023/08/18 06:35:52 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap poo("poo");
	ScavTrap copyPoo(poo);
	poo.attack("pp");
	copyPoo.attack("pp");
	poo.guardGate();
	copyPoo.guardGate();
}