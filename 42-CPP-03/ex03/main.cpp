/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:13:23 by azari             #+#    #+#             */
/*   Updated: 2023/08/17 15:07:08 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	PikaBoo("Pikaboo");
	// DiamondTrap PB(PikaBoo);
	PikaBoo.attack("MONSTER");
	PikaBoo.whoAmI();
	PikaBoo.guardGate();
}