/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:07:17 by azari             #+#    #+#             */
/*   Updated: 2023/08/19 14:10:09 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{

protected:
	std::string type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal &other);
	WrongAnimal	&operator=(WrongAnimal &other);
	std::string getType(void) const;
	void	makeSound() const;	
};

#endif