/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 06:59:08 by azari             #+#    #+#             */
/*   Updated: 2023/09/26 09:20:58 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat &other);
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(Bureaucrat& other);
		~Bureaucrat();
		const std::string getName() const;
		int getGrade() const;
		void	IncrementGrade();
		void	DecrementGrade();
	
	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
