/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:13:23 by azari             #+#    #+#             */
/*   Updated: 2023/08/18 06:15:08 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	PikaBoo("Pikaboo");
	PikaBoo.attack("MONSTER");
	PikaBoo.whoAmI();
	PikaBoo.takeDamage(300);
	PikaBoo.guardGate();
	PikaBoo.highFivesGuys();
}
