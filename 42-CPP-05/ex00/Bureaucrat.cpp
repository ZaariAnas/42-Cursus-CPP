/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:28:44 by azari             #+#    #+#             */
/*   Updated: 2023/09/04 12:31:25 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& os, Bureaucrat& Bureaucrat)
{
	os << Bureaucrat.getGrade();
	return (os);	
}

Bureaucrat::Bureaucrat() : _name("Burreaucrat"), _grade(150)
{
	std::cout << "A Burreaucrat was Born" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	
	std::cout << "A Burreaucrat was Born" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
	if (this != &other)
		this->_grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A Burreaucrat Died" << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}
