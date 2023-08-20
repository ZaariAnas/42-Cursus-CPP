/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:15:05 by azari             #+#    #+#             */
/*   Updated: 2023/08/19 14:15:37 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat &other)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = other;
}

WrongCat	&WrongCat::operator=(WrongCat &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string WrongCat::getType(void) const
{
	return this->type;
}

void	WrongCat::makeSound() const
{
	std::cout << "\033[1;35mWrongCats\033[0m \033[1;32mBARK\033[0m" << std::endl;
}