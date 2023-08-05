/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 07:11:42 by azari             #+#    #+#             */
/*   Updated: 2023/08/05 15:47:08 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "\n\033[3;37mI love having extra bacon for my 7XL-double-cheese-triple\
-pickle-special-ketchup burger. I really do!\n" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "\n\033[3;37mI cannot believe adding extra bacon costs more money.\
You didn't putenough bacon in my burger! If you did, I wouldn't be asking\
for more!\n" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "\n\033[3;37mI think I deserve to have some extra bacon for free.\
I've been coming for years whereas you started working here since last month.\n" << std::endl;
}
void	Harl::error(void)
{
	std::cout << "\n\033[3;37mThis is unacceptable! I want to speak \
to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	t_comms comms[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	static int j;

	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*comms[i])();
	else
		j++;
	if (!(j % 3) && i == 4)
		std::cout 	<< "\n\033[3;31merror : unvalid input"
					<< "\nusage: pick a level : < DEBUG, INFO, WARNING, ERROR, EXIT >\n" << std::endl;
}
