/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:49:20 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 11:28:11 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal{

protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(Animal &other);
	Animal	&operator=(Animal &other);
	std::string getType(void) const;
	virtual void	makeSound() const;
};

#endif