/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:40:17 by azari             #+#    #+#             */
/*   Updated: 2023/09/26 09:47:00 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _SignGrade(1), _ExecGrade(1){
	std::cout << "Form Default Constructor Called" << std::endl;
}
Form::~Form() {
	std::cout << "Form\033[1;32m "<< _name << "\033[0m Destructor Called" << std::endl;		
}

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _SignGrade(sgrade), _ExecGrade(egrade){
	if (egrade < 1 || sgrade < 1)
		throw GradeTooHighException();
	if (egrade > 150 || sgrade > 150)
		throw GradeTooLowException();
	_Signature = false;
	std::cout << "Form\033[1;32m "<< _name << "\033[0m Constructor Called" << std::endl;		
}

int	Form::getExecGrade() const{
	return this->_ExecGrade;
}

int	Form::getSignGrade() const{
	return this->_SignGrade;
}

const std::string	Form::getName() const{
	return this->_name;
}

bool Form::getSigState() {
	return this->_Signature;
}

Form::Form(Form& other) : _name(other.getName()), _SignGrade(other.getSignGrade()), _ExecGrade(other.getExecGrade()){
	*this = other;
}

Form& Form::operator=(Form& other) {
	if (this != &other)
		this->_Signature = other.getSigState();
	return *this;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_SignGrade)
		this->_Signature = true;
	else
		throw GradeTooLowException();
}


const char* Form::GradeTooHighException::what() const throw(){
	return "\n\033[3;31mGrade is Too High\n\033[0;0m";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "\n\033[3;31mGrade is Too Low\n\033[0;0m";
}

std::ostream& operator<<(std::ostream& os, Form& f){
	os	<< "\n-----------------\n"
		<< "   FORM INFO      \n"
		<< "-----------------\n"
	 	<< "Name : " << f.getExecGrade()
		<< "\nExec Grade : " << f.getExecGrade()
		<< "\nSign Grade : " << f.getSignGrade()
		<< "\nSignature : " << f.getSigState()
		<< "\n-----------------\n";
	return os;
}
