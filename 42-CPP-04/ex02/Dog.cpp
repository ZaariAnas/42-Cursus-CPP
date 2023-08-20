/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:04:12 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 12:07:34 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor Called" << std::endl;
    try {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& ex) {
        std::cout << "error: memory allocation failure:" << ex.what() << std::endl;
    }
}

Dog::~Dog()
{
	delete this->brain;
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

std::string Dog::getType(void) const
{
	return this->type;
}
void	Dog::makeSound() const
{
	std::cout << "\033[1;35mDogs\033[0m don't \033[1;32mMEOW\033[0m" << std::endl;
}