/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:41:35 by azari             #+#    #+#             */
/*   Updated: 2023/09/20 13:23:51 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other) : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()), _target(other._target){}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other){
	AForm::operator=(other);
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	
	if (!(this->getSigState()))
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	std::cout <<  _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
