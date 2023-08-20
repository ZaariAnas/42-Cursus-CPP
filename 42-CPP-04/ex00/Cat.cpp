/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:05:11 by azari             #+#    #+#             */
/*   Updated: 2023/08/19 12:35:42 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	this->type = "Cat";
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = other;
}

Cat	&Cat::operator=(Cat &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string Cat::getType(void) const
{
	return this->type;
}

void	Cat::makeSound() const
{
	std::cout << "\033[1;35mCats\033[0m don't \033[1;32mBARK\033[0m" << std::endl;
}