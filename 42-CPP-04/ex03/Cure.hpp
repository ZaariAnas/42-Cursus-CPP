/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 06:48:22 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 13:20:30 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"


class Cure : public AMateria
{
	private:
		std::string type;
	public:
		Cure();
		~Cure();
		Cure(Cure &other);
		Cure &operator=(Cure &other);
		AMateria* clone() const;
		void use(ICharacter &target);
};