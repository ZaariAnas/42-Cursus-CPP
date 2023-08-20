/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:04:12 by azari             #+#    #+#             */
/*   Updated: 2023/08/19 12:35:52 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
	this->type = "Dog";
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = other;
}

Dog	&Dog::operator=(Dog &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string Dog::getType(void) const
{
	return this->type;
}
void	Dog::makeSound() const
{
	std::cout << "\033[1;35mDogs\033[0m don't \033[1;32mMEOW\033[0m" << std::endl;
}