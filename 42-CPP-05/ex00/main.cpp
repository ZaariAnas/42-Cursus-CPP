/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:31:58 by azari             #+#    #+#             */
/*   Updated: 2023/09/26 09:18:24 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

		try{
			
			Bureaucrat();
			Bureaucrat Jimmy("Jimmy", 149);
			Jimmy.IncrementGrade();
			std::cout << Jimmy;
			Bureaucrat copyJimmy(Jimmy);
			std::cout << copyJimmy;
			Jimmy.DecrementGrade();
			std::cout << Jimmy;
		}
		catch( std::exception &e ){
			std::cout << e.what() << std::endl;
		}

	
	{
		try{

			Bureaucrat Jimmy("Jimmy", 150);
			Bureaucrat Bob("Bob", 151);
		}
		catch( std::exception &e ){
			std::cout << e.what() << std::endl;
		}
	}
	
	{	
		try{

			Bureaucrat Jimmy("Jimmy", 1);
			Bureaucrat Bob("Bob", 0);
		}
		catch( std::exception &e ){
			std::cout << e.what() << std::endl;
		}
		std::cout << "Finish" << std::endl;
	}
}
