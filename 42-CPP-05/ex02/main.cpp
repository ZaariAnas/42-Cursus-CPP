/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:36:07 by azari             #+#    #+#             */
/*   Updated: 2023/09/26 10:02:29 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>


int main()
{

    std::cout << "Testing Bureaucrat Class" << std::endl;

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

std::cout << "-------------------------" << std::endl;
	
	{
		try{

			Bureaucrat Jimmy("Jimmy", 150);
			Bureaucrat Bob("Bob", 151);
		}
		catch( std::exception &e ){
			std::cout << e.what() << std::endl;
		}
	}
	
std::cout << "-------------------------" << std::endl;
	{	
		try{

			Bureaucrat Jimmy("Jimmy", 1);
			Bureaucrat Bob("Bob", 0);
		}
		catch( std::exception &e ){
			std::cout << e.what() << std::endl;
		}
	}

std::cout << "-----------------------------------------" << std::endl;
std::cout << "Testing Form Class" << std::endl;

			// Bureaucrat Jimmy("Jimmy", 149);
			// AForm DForm;
			// AForm A33("A33", 77, 77);
			// AForm copyA33(A33);
	
std::cout << "-----------------------------------------" << std::endl;
    
    try
    {
        Bureaucrat Jimmy("Jimmy", 1);
        std::cout << "-----------------------------------------" << std::endl;
        ShrubberyCreationForm W23("SnowyDays");
        Jimmy.signForm(W23);
        Jimmy.executeForm(W23);
        std::cout << "-----------------------------------------" << std::endl;
        RobotomyRequestForm T45("Toaster45");
        Jimmy.signForm(T45);
        Jimmy.executeForm(T45);
        std::cout << "-----------------------------------------" << std::endl;
        PresidentialPardonForm C7("Criminal_007");
        Jimmy.signForm(C7);
        Jimmy.executeForm(C7);
        std::cout << "-----------------------------------------" << std::endl;
    }
    catch (std::exception &ex){
        std::cout << ex.what() << std::endl;    
    }

    std::cout << "-----------------------------------------" << std::endl;
    {
            Bureaucrat Bob("Bob", 150);
            ShrubberyCreationForm ex("ex");
            Bob.signForm(ex);
    }
    std::cout << "-----------------------------------------" << std::endl;
    {
            Bureaucrat Bob("Bob", 150);
            RobotomyRequestForm ex("ex");
            Bob.signForm(ex);
    }
    std::cout << "-----------------------------------------" << std::endl;
    {
            Bureaucrat Bob("Bob", 150);
            PresidentialPardonForm ex("ex");
            Bob.signForm(ex);
    }
    std::cout << "-----------------------------------------" << std::endl;
}
