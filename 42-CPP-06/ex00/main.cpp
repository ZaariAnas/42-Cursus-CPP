/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:42:18 by azari             #+#    #+#             */
/*   Updated: 2023/12/20 15:50:00 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2 || !av[1][0])
		return raiseArgError();
	std::string litteral = av[1];
	ScalarConverter::convert(litteral);
	return 0;
}
