/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:59:53 by azari             #+#    #+#             */
/*   Updated: 2023/08/02 15:00:22 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cerr << "\n\033[3;31merror:\nUsage: ./Sed <filename> <to_find> <replace>\n", 1);
	Sed S(av[1]);
	S.replace(av[2], av[3]);
}
