/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:31:54 by azari             #+#    #+#             */
/*   Updated: 2023/09/04 12:39:46 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		Bureaucrat Jimmy("Jimmy", 1);
		// Bureaucrat Prob("Jimmy", -1);
		
		std::cout << "Jimmy's grade : " << Jimmy << std::endl;
		Jimmy.incrementGrade();
		std::cout << "Unreached Region" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &exception)
	{
		std::cout << exception.what() << std::endl;
	}
}
