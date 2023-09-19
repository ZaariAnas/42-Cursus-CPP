/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:33:57 by azari             #+#    #+#             */
/*   Updated: 2023/09/19 15:10:18 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string _name;
		const int _SignGrade;
		const int _ExecGrade;
		bool _Signature;
		
	public:

		Form(Form &other);
		Form(std::string name, int sgrade, int egrade);
		Form &operator=(Form& other);
		~Form();
		std::string getName();
		int getExecGrade();
		int getSignGrade();
		bool getSigState();
		void beSigned(Bureaucrat &b);
		

	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Form& f);