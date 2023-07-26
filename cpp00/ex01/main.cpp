/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:09:28 by azari             #+#    #+#             */
/*   Updated: 2023/07/26 12:10:55 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main() {

	PhoneBook	p;
	std::string buffer;

	p.menu();
	p._size = 0;
	while (std::cin.good())
	{
		std::cout << "\n\033[36m(rolodex)~$ \033[0m";
		std::getline(std::cin, buffer);
		if (!buffer.compare("ADD"))
			p.ADD();
		else if (!buffer.compare("SEARCH"))
			p.SEARCH();
		else if (!buffer.compare("EXIT"))
			exit(0);
		else if (!buffer.empty())
			std::cout << "select a valid command (ADD, SEARCH or EXIT)." << std::endl;
	}
	return (0);
}
