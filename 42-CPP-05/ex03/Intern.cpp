/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:39:02 by azari             #+#    #+#             */
/*   Updated: 2023/09/20 17:33:31 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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

AForm*    Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string forms[3] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    
    ShrubberyCreationForm s(formTarget);
    RobotomyRequestForm r(formTarget);
    PresidentialPardonForm p(formTarget);

    AForm *formObj[3] = {&s, &r, &p};
    for (int i = 0; i < 3; i++){
        if (!(forms[i].compare(formName)))
            return formObj[i];
    }
    throw Intern::UnknownFormException();
    return 0;
}
