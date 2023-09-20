/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:26:41 by azari             #+#    #+#             */
/*   Updated: 2023/09/20 15:16:48 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
		private:
			const std::string _target;
			void execute(Bureaucrat const &executor) const;
		public:
			RobotomyRequestForm(RobotomyRequestForm &other);
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm &operator=(RobotomyRequestForm& other);
			~RobotomyRequestForm();
};
