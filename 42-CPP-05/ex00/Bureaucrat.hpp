/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:51:15 by azari             #+#    #+#             */
/*   Updated: 2023/09/04 12:26:21 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		
		const std::string _name;
		int	_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(Bureaucrat& other);
		Bureaucrat(Bureaucrat& other);
		const std::string	getName() const;
		void decrementGrade();
		void incrementGrade();
		int	getGrade() const;
		~Bureaucrat();
		
	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw(){ return "Bureaucrat's Grade is too High"; }
	};
	
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw(){ return "Bureaucrat's Grade is too Low"; }
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat& b);
