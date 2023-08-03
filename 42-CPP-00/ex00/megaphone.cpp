/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:36:26 by azari             #+#    #+#             */
/*   Updated: 2023/07/22 14:58:46 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else
	{
		int i = 0;
		int	j;
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				std::cout << (char)std::toupper(av[i][j]);
		}
		std::cout << std::endl;
	}	
}
