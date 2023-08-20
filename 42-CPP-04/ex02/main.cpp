/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:29:11 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 14:34:43 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void )
{
	std::cout << "\n\033[1;34m-----------[ Basic Dog ]-----------\033[0m\n" << std::endl;
    Dog basic;
    {Dog tmp = basic;}
	std::cout << "\n\033[1;34m-----------[ AAnimal ]-----------\033[0m\n" << std::endl;
	const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	std::cout << std::endl;
	animals[0]->makeSound();
	animals[3]->makeSound();
	std::cout << "\n\033[1;34m> AAnimal Desctruction\033[0m\n" << std::endl;
	for ( int i = 0; i < 4; i++ )
	{
		std::cout << "\033[1;34m>>>> \033[0m";
        delete animals[i];
    }
	std::cout << "\n\033[1;34m> Basic Dog Desctruction\033[0m\n" << std::endl;
	// std::cout << "\n\033[1;34m-----------[ WrongAnimal ]-----------\033[0m\n" << std::endl;
	// const WrongAnimal* animals2[4] = { new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat() };
	// std::cout << "\n\033[1;34m> WrongAnimal Desctruction\033[0m\n" << std::endl;
	// for ( int i = 0; i < 4; i++ )
	// {
	// 	std::cout << "\033[1;34m>>>> \033[0m";
    //     delete animals2[i];
    // }
	return 0;
}