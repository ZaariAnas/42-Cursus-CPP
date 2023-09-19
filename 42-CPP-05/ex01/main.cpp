/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:31:58 by azari             #+#    #+#             */
/*   Updated: 2023/09/19 15:23:00 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try{

		Bureaucrat jimmy("foo", 149);
		Form Contract("Contract", 111, 1);
		std::cout << Contract << std::endl;
		jimmy.signForm(Contract);

	}
	catch( std::exception &e ){
		std::cout << e.what() << std::endl;
	}
}