/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:28:10 by azari             #+#    #+#             */
/*   Updated: 2023/09/26 09:40:02 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Form"), _SignGrade(1), _ExecGrade(1){}

AForm::~AForm() {
	std::cout << "AForm\033[1;32m "<< _name << "\033[0m Destructor Called" << std::endl;		
}

AForm::AForm(std::string name, int sgrade, int egrade) : _name(name), _SignGrade(sgrade), _ExecGrade(egrade){
	
	if (egrade < 1 || sgrade < 1)
		throw GradeTooHighException();
	if (egrade > 150 || sgrade > 150)
		throw GradeTooLowException();
	_Signature = false;
	std::cout << "AForm\033[1;32m "<< _name << "\033[0m Constructor Called" << std::endl;		
}

int	AForm::getExecGrade()  const{
	
	return this->_ExecGrade;
}

int	AForm::getSignGrade()  const{

	return this->_SignGrade;
}

std::string	AForm::getName()  const{
	
	return this->_name;
}

bool AForm::getSigState() const{

	return this->_Signature;
}

AForm::AForm(AForm& other) : _name(other.getName()), _SignGrade(other.getSignGrade()), _ExecGrade(other.getExecGrade()){

	*this = other;
}

AForm& AForm::operator=(AForm& other){

	if (this != &other)
		this->_Signature = other.getSigState();
	return *this;
}

void	AForm::beSigned(Bureaucrat &b){
	
	if (b.getGrade() <= this->_SignGrade)
		this->_Signature = true;
	else
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw(){
	
	return "\n\033[3;31mGrade is Too High\n\033[0;0m";
}

const char* AForm::GradeTooLowException::what() const throw(){
	
	return "\n\033[3;31mGrade is Too Low\n\033[0;0m";
}

const char *AForm::UnsignedFormException::what() const throw(){
	
	return "\n\033[3;31mForm to Execute is Unsigned\n\033[0;0m";
}

const char *AForm::OutputFileException::what() const throw(){
	
	return "\n\033[3;31mFailed to output file\n\033[0;0m";
}

std::ostream& operator<<(std::ostream& os, AForm& f){
	
	os	<< "\n-----------------\n"
		<< "   AForm INFO      \n"
		<< "-----------------\n"
	 	<< "Name : " << f.getExecGrade()
		<< "\nExec Grade : " << f.getExecGrade()
		<< "\nSign Grade : " << f.getSignGrade()
		<< "\nSignature : " << f.getSigState()
		<< "\n-----------------\n";
	return os;
}
