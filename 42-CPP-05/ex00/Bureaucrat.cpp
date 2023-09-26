/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 07:50:09 by azari             #+#    #+#             */
/*   Updated: 2023/09/26 09:41:06 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat\033[1;32m "<< _name << "\033[0m Destructor Called" << std::endl;		
}

Bureaucrat::Bureaucrat() :_name("Bureaucrat"), _grade(1){
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
		_grade = grade;
	std::cout << "Bureaucrat\033[1;32m "<< _name << "\033[0m Constructor Called" << std::endl;		
}

int	Bureaucrat::getGrade() const{
	return this->_grade;
}

const std::string	Bureaucrat::getName() const{
	return this->_name;
}

Bureaucrat::Bureaucrat(Bureaucrat& other): _name("copy" + other.getName()) {
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& other) {
	if (this != &other)
		this->_grade = other.getGrade();
	return *this;
}

void	Bureaucrat::DecrementGrade() {
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::IncrementGrade() {
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "\n\033[3;31merror: Grade Too High\033[0;0m\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "\n\033[3;31merror: Grade Too Low\033[0;0m\n";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b){

	os	<< "\033[1;32m"<< b.getName() << "\033[0m, bureaucrat grade " 
		<< "\033[1;32m"<< b.getGrade() << "\033[0m" << std::endl;
	return os;
}