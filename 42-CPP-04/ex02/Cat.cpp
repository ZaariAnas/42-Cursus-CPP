/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:05:11 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 12:08:02 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor Called" << std::endl;
    try {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& ex) {
        std::cout << "error: memory allocation failure:" << ex.what() << std::endl;
    }
}

Cat::~Cat()
{
	delete this->brain;
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
	{
		this->type = other.type;
		try {
        	this->brain = new Brain( *other.brain );
    	}
    	catch (const std::bad_alloc& ex) {
        	std::cout << "error: memory allocation failure:" << ex.what() << std::endl;
    	}
	}
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