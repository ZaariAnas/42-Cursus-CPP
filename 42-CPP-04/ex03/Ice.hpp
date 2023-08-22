/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:33:06 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 13:20:18 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string type;
	public:
		Ice();
		~Ice();
		Ice(Ice &other);
		Ice &operator=(Ice &other);
		AMateria* clone() const;
		void use(ICharacter &target);
};