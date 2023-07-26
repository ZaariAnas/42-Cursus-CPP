/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 09:44:28 by azari             #+#    #+#             */
/*   Updated: 2023/07/26 13:00:45 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook{
	
		Contact _contact[8];
	public:

		int		_size;
		void	menu(void) const;
		void	SEARCH(void) const;
		void	ADD(void);
		void	DISPLAY(void) const;
};

#endif