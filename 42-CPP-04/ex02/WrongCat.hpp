/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:14:32 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 12:21:43 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

private:
	Brain *brain;
public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat &other);
	WrongCat &operator=(WrongCat &other);
	std::string getType(void) const;
	void makeSound() const;
};

#endif