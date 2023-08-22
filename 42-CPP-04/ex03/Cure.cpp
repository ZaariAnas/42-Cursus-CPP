/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:03:18 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 13:53:15 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "A Cure AMateria Was Made" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "A Cure AMatoria Was Destroyed" << std::endl;
}

Cure::Cure(Cure &other) : AMateria("cure")
{
	// std::cout << "A Cure AMatoria Was Copied" << std::endl;
	*this = other;
}

Cure &Cure::operator=(Cure &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

AMateria	*Cure::clone() const
{
	AMateria *instance = new ( std::nothrow ) Cure();
	if (!instance)
	{
		std::cerr << "error: memory allocation failure" << std::endl;
		exit(1);
	}
	return instance;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s woonds *" << std::endl;
}