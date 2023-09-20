/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:21:56 by azari             #+#    #+#             */
/*   Updated: 2023/09/20 15:17:10 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
		private:
			const std::string _target;
			void execute(Bureaucrat const &executor) const;
		public:
			PresidentialPardonForm(PresidentialPardonForm &other);
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm &operator=(PresidentialPardonForm& other);
			~PresidentialPardonForm();

};
