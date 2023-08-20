/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:49:20 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 11:28:11 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal{

protected:
	std::string type;
public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(AAnimal &other);
	AAnimal	&operator=(AAnimal &other);
	std::string getType(void) const;
	virtual void	makeSound() const = 0;
};

#endif