/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:27:05 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 11:26:13 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria	*_inventory[4];
	public:
		~Character();
		Character(std::string name);
		Character(Character &other);
		Character &operator=(Character &other);
		std::string const & getName() const;
		void equip(AMateria* m) ;
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
