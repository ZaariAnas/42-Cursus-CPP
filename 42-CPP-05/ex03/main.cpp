/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:36:07 by azari             #+#    #+#             */
/*   Updated: 2023/09/20 16:24:32 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>


int main()
{
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
}
