/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:27:12 by azari             #+#    #+#             */
/*   Updated: 2023/09/20 15:17:01 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

		private:
			const std::string _target;
			void execute(Bureaucrat const &executor) const;
		public:
			ShrubberyCreationForm(ShrubberyCreationForm &other);
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm &operator=(ShrubberyCreationForm& other);
			~ShrubberyCreationForm();

};
