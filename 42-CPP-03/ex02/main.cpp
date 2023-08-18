/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:13:23 by azari             #+#    #+#             */
/*   Updated: 2023/08/18 06:39:48 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Fragy("FRAG");
	FragTrap copyFragy(Fragy);
	Fragy.attack("MONSTER");
	copyFragy.attack("MONSTER");
	Fragy.highFivesGuys();
	copyFragy.highFivesGuys();
}