/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:45:42 by azari             #+#    #+#             */
/*   Updated: 2023/08/05 15:47:51 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl		H;
	std::string	buffer;

	std::cout << "\n\033[1;33mpick a level : \033[0m";
	while (std::getline(std::cin, buffer, '\n') && buffer.compare("EXIT"))
	{
		H.complain(buffer);
		std::cout << "\033[1;33mpick a level : \033[0m";
	}
}
