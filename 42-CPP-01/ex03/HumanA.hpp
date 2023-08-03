/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:39:57 by azari             #+#    #+#             */
/*   Updated: 2023/08/01 14:02:35 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA{

	std::string _name;
	Weapon &_w;
public:

	HumanA(std::string name, Weapon &w);
	~HumanA();
	void	attack(void) const;
};

#endif