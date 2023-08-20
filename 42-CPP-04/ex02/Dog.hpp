/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:01:29 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 14:24:52 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"

class Dog : public AAnimal{

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