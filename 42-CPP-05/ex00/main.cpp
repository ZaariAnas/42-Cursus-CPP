/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:31:58 by azari             #+#    #+#             */
/*   Updated: 2023/09/19 10:27:39 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{

		Bureaucrat foo("foo", 149);
		foo.DecrementGrade();
		Bureaucrat poo("foo", -1);
	}
	catch( std::exception &e ){
		std::cout << e.what() << std::endl;
	}
}