/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:45:42 by azari             #+#    #+#             */
/*   Updated: 2023/08/03 13:57:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl		H;

	if (ac != 2)
	{
		std::cout 	<< "\n\033[3;31merror : unvalid input"
					<< "\nusage: ./harlFilter <DEBUG, INFO, WARNING, ERROR, \"text\">\n" << std::endl;
		return (EXIT_FAILURE);
	}
	H.complain(av[1]);
	return (EXIT_SUCCESS);
}