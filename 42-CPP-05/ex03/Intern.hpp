/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:31:07 by azari             #+#    #+#             */
/*   Updated: 2023/09/20 17:32:04 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    private:
        const std::string _formName;
        const std::string _formTarget;
    public:
        Intern();
		Intern(Intern &copy);
		Intern &operator=(Intern& other);
		~Intern();
        AForm*  makeForm(std::string formName, std::string formTarget);

    class UnknownFormException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
};