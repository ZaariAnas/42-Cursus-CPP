/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:10:37 by azari             #+#    #+#             */
/*   Updated: 2023/08/19 14:11:43 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string WrongAnimal::getType(void)  const
{
	return this->type;
}
void	WrongAnimal::makeSound() const
{
	std::cout << "\033[1;35mWrongAnimal\033[0m Sound" << std::endl;
}