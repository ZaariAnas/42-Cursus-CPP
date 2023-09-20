/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:18:38 by azari             #+#    #+#             */
/*   Updated: 2023/09/20 14:13:33 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		const std::string _name;
		const int _SignGrade;
		const int _ExecGrade;
		bool _Signature;
		
	public:

		AForm(AForm &other);
		AForm(std::string name, int sgrade, int egrade);
		AForm &operator=(AForm& other);
		std::string getName() const;
		int getExecGrade() const;
		int getSignGrade() const;
		bool getSigState() const;
		void beSigned(Bureaucrat &b);
		virtual void execute(Bureaucrat const &executor) const = 0;
		virtual ~AForm();


	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	
	class UnsignedFormException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	
	class OutputFileException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, AForm& f);