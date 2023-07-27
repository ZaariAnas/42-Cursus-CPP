/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:19:45 by azari             #+#    #+#             */
/*   Updated: 2023/07/27 10:52:54 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define YELLOW "\033[1;33m"

int main()
{
	std::string string = "HI THIS IS A BRAIN";
	std::string *stringPTR = NULL;
	std::string &stringREF = string;
	stringPTR = &string;

	std::cout << std::endl;
	std::cout <<"Address of string is      : " << &string << std::endl;	
	std::cout << "Address held by stringPTR : " << stringPTR << std::endl;	
	std::cout << "Address held by stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string is            : " << string << std::endl;	
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;	
	std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
}
