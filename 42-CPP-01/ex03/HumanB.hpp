/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:57:40 by azari             #+#    #+#             */
/*   Updated: 2023/08/01 13:57:44 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

	std::string _name;
	Weapon *_w;
public:

	HumanB(std::string name);
	~HumanB();
	void	attack(void) const;
	void	setWeapon(Weapon &);
};

#endif