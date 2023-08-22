/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:53 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 14:30:08 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "An Ice AMateria Was Made" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "An Ice AMatoria Was Destroyed" << std::endl;
}

Ice::Ice(Ice &other) : AMateria("ice")
{
	// std::cout << "An Ice AMatoria Was Copied" << std::endl;
	*this = other;
}

Ice &Ice::operator=(Ice &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

AMateria	*Ice::clone() const
{
	AMateria *instance = new ( std::nothrow ) Ice();
	if (!instance)
	{
		std::cerr << "error: memory allocation failure" << std::endl;
		exit(1);
	}
	return instance;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
