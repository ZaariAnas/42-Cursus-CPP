/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 06:34:17 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 13:52:45 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
	this->type = type;
	// std::cout << "A New AMateria Was Born" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "An AMateria Was Destroyed" << std::endl;
}

AMateria::AMateria(AMateria& other)
{
	// std::cout << "Copying an AMateria" << std::endl;
	*this = other;
}


AMateria &AMateria::operator=(AMateria& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "An " << this->getType() << " AMateria was used on " << target.getName() << std::endl;
}
