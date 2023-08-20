/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:01:29 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 11:30:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{

private:
	Brain *brain;
public:
	Dog();
	~Dog();
	Dog(Dog &other);
	Dog	&operator=(Dog &other);
	std::string getType(void) const;
	void makeSound() const;
};

#endif