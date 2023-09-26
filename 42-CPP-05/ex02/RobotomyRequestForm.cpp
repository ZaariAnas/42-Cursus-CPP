/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:59:28 by azari             #+#    #+#             */
/*   Updated: 2023/09/26 09:34:53 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()), _target(other._target){}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other){
	AForm::operator=(other);
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	
	if (!(this->getSigState()))
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();

	std::cout << "VVVNNNNNNN VVVNNNNNNNN VNNNNNNNNNNN" << std::endl;
	if (!(std::time(NULL) % 2))
		std::cout << _target << " has been robotomized successfully !" << std::endl;		
	else
		std::cout << "Robotomy failed for " << _target << std::endl;
}