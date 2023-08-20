/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:29:11 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 11:13:11 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void )
{
	std::cout << "---------------------------------------------------" << std::endl;
    Dog basic;
    {Dog tmp = basic;}
	std::cout << "----------------------- Animal --------------------------" << std::endl;
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ )
	{
        delete animals[i];
		std::cout << "---" << std::endl;
    }
	std::cout << "----------------------- Wrong Animal --------------------------" << std::endl;
    const WrongAnimal* animals2[4] = { new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat() };
    for ( int i = 0; i < 4; i++ )
	{
        delete animals2[i];
		std::cout << "---" << std::endl;
    }
    return 0;
}
