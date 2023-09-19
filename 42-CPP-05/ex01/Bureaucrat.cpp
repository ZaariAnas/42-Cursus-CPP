/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 07:50:09 by azari             #+#    #+#             */
/*   Updated: 2023/09/19 15:23:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat\033[1;32m "<< _name << "\033[0m Destructor Called" << std::endl;		
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
		_grade = grade;
	std::cout << "Bureaucrat\033[1;32m "<< _name << "\033[0m Constructor Called" << std::endl;		
}

int	Bureaucrat::getGrade() {
	return this->_grade;
}

std::string	Bureaucrat::getName() {
	return this->_name;
}

Bureaucrat::Bureaucrat(Bureaucrat& other) {
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

void	Bureaucrat::signForm(Form &f)
{
	try{ 
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception &ex){
		std::cout 	<< this->_name << " couldn't sign form " << f.getName()
		 			<< " because " << ex.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "\n\033[3;31merror: Grade Too High\n\033[0;0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "\n\033[3;31merror: Grade Too Low\n\033[0;0m";
}