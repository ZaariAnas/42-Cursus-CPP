/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:05:27 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 14:25:00 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "AAnimal.hpp"

class Cat : public AAnimal{

private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(Cat &other);
	Cat	&operator=(Cat &other);
	std::string getType(void) const;
	void makeSound() const;
};

#endif