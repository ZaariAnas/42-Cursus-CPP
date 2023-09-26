/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:36:07 by azari             #+#    #+#             */
/*   Updated: 2023/09/26 10:13:55 by azari            ###   ########.fr       */
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
        Intern copyIntern(someRandomIntern);
        AForm* rrf;
        rrf = copyIntern.makeForm("presidential pardon", "Bender");
        Bureaucrat Jimmy("Jimmy", 150);
        Bureaucrat copyJimmy(Jimmy);
        copyJimmy.signForm(*rrf);
        copyJimmy.executeForm(*rrf);
        std::cout << "-----------------------------------------" << std::endl;
    }
    catch (std::exception &ex){
        std::cout << ex.what() << std::endl;
    }

    {
        try
        {
            Intern someRandomIntern;
            Intern copyIntern(someRandomIntern);
            AForm* rrf;
            rrf = copyIntern.makeForm("shrubbery creation", "Bender");
            Bureaucrat Jimmy("Jimmy", 150);
            Bureaucrat copyJimmy(Jimmy);
            copyJimmy.signForm(*rrf);
            copyJimmy.executeForm(*rrf);
            std::cout << "-----------------------------------------" << std::endl;
        }
        catch (std::exception &ex){
            std::cout << ex.what() << std::endl;
        }
    }
    
    {
        try
        {
            Intern someRandomIntern;
            Intern copyIntern(someRandomIntern);
            AForm* rrf;
            rrf = copyIntern.makeForm("robotomy request", "Bender");
            Bureaucrat Jimmy("Jimmy", 150);
            Bureaucrat copyJimmy(Jimmy);
            copyJimmy.signForm(*rrf);
            copyJimmy.executeForm(*rrf);
            std::cout << "-----------------------------------------" << std::endl;
        }
        catch (std::exception &ex){
            std::cout << ex.what() << std::endl;
        }
    }
    
    std::cout << "---------------------------------------------------------------------" << std::endl;
    
        try
    {
        Intern someRandomIntern;
        Intern copyIntern(someRandomIntern);
        AForm* rrf;
        rrf = copyIntern.makeForm("presidential pardon", "Bender");
        Bureaucrat Jimmy("Jimmy", 1);
        Bureaucrat copyJimmy(Jimmy);
        copyJimmy.signForm(*rrf);
        copyJimmy.executeForm(*rrf);
        std::cout << "-----------------------------------------" << std::endl;
    }
    catch (std::exception &ex){
        std::cout << ex.what() << std::endl;
    }

    {
        try
        {
            Intern someRandomIntern;
            Intern copyIntern(someRandomIntern);
            AForm* rrf;
            rrf = copyIntern.makeForm("shrubbery creation", "Bender");
            Bureaucrat Jimmy("Jimmy", 1);
            Bureaucrat copyJimmy(Jimmy);
            copyJimmy.signForm(*rrf);
            copyJimmy.executeForm(*rrf);
            std::cout << "-----------------------------------------" << std::endl;
        }
        catch (std::exception &ex){
            std::cout << ex.what() << std::endl;
        }
    }
    
    {
        try
        {
            Intern someRandomIntern;
            Intern copyIntern(someRandomIntern);
            AForm* rrf;
            rrf = copyIntern.makeForm("robotomy request", "Bender");
            Bureaucrat Jimmy("Jimmy", 1);
            Bureaucrat copyJimmy(Jimmy);
            copyJimmy.signForm(*rrf);
            copyJimmy.executeForm(*rrf);
            std::cout << "-----------------------------------------" << std::endl;
        }
        catch (std::exception &ex){
            std::cout << ex.what() << std::endl;
        }
    }
}
