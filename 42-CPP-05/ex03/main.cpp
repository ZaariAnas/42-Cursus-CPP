/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:36:07 by azari             #+#    #+#             */
/*   Updated: 2023/09/21 08:37:33 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        Bureaucrat Jimmy("Jimmy", 1);
        // Jimmy.signForm(*rrf);
        Jimmy.executeForm(*rrf);
        std::cout << "-----------------------------------------" << std::endl;
    }
    catch (std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
}
