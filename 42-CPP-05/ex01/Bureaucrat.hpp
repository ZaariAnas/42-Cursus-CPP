/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 06:59:08 by azari             #+#    #+#             */
/*   Updated: 2023/09/19 15:11:09 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(Bureaucrat &other);
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(Bureaucrat& other);
		~Bureaucrat();
		std::string getName();
		int getGrade();
		void	IncrementGrade();
		void	DecrementGrade();
		void	signForm(Form &f);

	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};

};
