/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:39:02 by azari             #+#    #+#             */
/*   Updated: 2023/09/21 08:35:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef AForm *(*Constructors)(std::string target);

Intern::~Intern(){
	// std::cout << "Intern Destructor Called" << std::endl;	
}

Intern::Intern(){
	// std::cout << "Intern Constructor Called" << std::endl;
}

Intern::Intern(Intern& copy){
	*this = copy;
}

Intern& Intern::operator=(Intern& other){
    (void)other;
	return *this;
}

const char* Intern::UnknownFormException::what() const throw(){
	return "\n\033[3;31mUnvalid Form\n\033[0;0m";
}

AForm* ConstructShurbberyForm(std::string target){
    std::cout << "Intern Making Shrubbery Form" << std::endl;
    return new ShrubberyCreationForm(target);
}

AForm* ConstructPresidentialPardonForm(std::string target){
    std::cout << "Intern Making Presidential Pardon Form" << std::endl;
    return new PresidentialPardonForm(target);
}

AForm* ConstructRobotomyForm(std::string target){
    std::cout << "Intern Making Robotomy Request Form" << std::endl;
    return new RobotomyRequestForm(target);
}

AForm*    Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string forms[3] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    
    Constructors funcs[3] = {
        ConstructPresidentialPardonForm,
        ConstructRobotomyForm,
        ConstructShurbberyForm
    };

    for (int i = 0; i < 3; i++){
        if (forms[i] == formName) return funcs[i](formTarget);
    }
    throw Intern::UnknownFormException();
    return 0;
}
