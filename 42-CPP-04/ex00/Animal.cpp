/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:54:01 by azari             #+#    #+#             */
/*   Updated: 2023/08/19 12:32:50 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(Animal &other)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = other;
}

Animal	&Animal::operator=(Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string Animal::getType(void)  const
{
	return this->type;
}
void	Animal::makeSound() const
{
	std::cout << "\033[1;35mAnimals\033[0m make sounds" << std::endl;
}