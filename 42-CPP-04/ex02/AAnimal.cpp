/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:54:01 by azari             #+#    #+#             */
/*   Updated: 2023/08/19 12:32:50 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "AAnimal Default Constructor Called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal &other)
{
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
	*this = other;
}

AAnimal	&AAnimal::operator=(AAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string AAnimal::getType(void)  const
{
	return this->type;
}
