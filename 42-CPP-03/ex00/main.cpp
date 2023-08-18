/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:13:23 by azari             #+#    #+#             */
/*   Updated: 2023/08/18 06:34:44 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap C("Cactuzio");
	
	for (int i = 0; i < 11 ; i++)
		C.attack("MONSTER");
	C.takeDamage(1000);
	ClapTrap F(C);
	F.attack("MONSTER");
}