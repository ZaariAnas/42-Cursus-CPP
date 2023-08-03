/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 07:11:42 by azari             #+#    #+#             */
/*   Updated: 2023/08/03 13:41:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "\n\033[1;37m[ DEBUG ]"<< std::endl;
	std::cout << "\033[1;37mI love having extra bacon for my 7XL-double-cheese-triple\
-pickle-special-ketchup burger. I really do!\n" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "\n\033[1;37m[ INFO ]"<< std::endl;
	std::cout << "\033[1;37mI cannot believe adding extra bacon costs more money. \
You didn't putenough bacon in my burger! If you did, I wouldn't be asking\
for more!\n" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "\n\033[1;37m[ WARNING ]"<< std::endl;
	std::cout << "\033[1;37mI think I deserve to have some extra bacon for free. \
I've been coming for years whereas you started working here since last month.\n" << std::endl;
}
void	Harl::error(void)
{
	std::cout << "\n\033[1;37m[ ERROR ]"<< std::endl;
	std::cout << "\033[1;37mThis is unacceptable! I want to speak \
to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4 && levels[i].compare(level))
		i++;
	int x = i;
	switch(x)
	{
		case 0:
				this->debug();
				this->info();
				this->warning();
				this->error();
				break;

		case 1:
				this->info();
				this->warning();
				this->error();
				break;

		case 2:
				this->warning();
				this->error();
				break;

		case 3:
				this->error();
				break;
		default:
				std::cout << "\n\033[1;37m[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
