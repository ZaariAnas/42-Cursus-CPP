/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:16:37 by azari             #+#    #+#             */
/*   Updated: 2023/07/26 12:58:14 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::menu(void) const
{
	std::cout << "\n\033[1;33m+----------------------------------------+\033[1;33m\n"
        	<< "\033[1;33m|           ROLODEX BOOK MENU            |\033[1;33m\n"
        	<< "\033[1;33m+----------------------------------------+\033[1;33m\n"
        	<< "\033[1;33m| \033[0m\033[36m1.\033[0m to Add a contact type \033[36mADD           \033[0m\033[1;33m|\033[0m\n"
        	<< "\033[1;33m| \033[0m\033[36m2.\033[0m to Search for a contact type \033[36mSEARCH \033[0m\033[1;33m|\033[0m\n"
        	<< "\033[1;33m| \033[0m\033[36m3.\033[0m to Exit the program type \033[36mEXIT       \033[0m\033[1;33m|\033[0m\n"
        	<< "\033[1;33m+----------------------------------------+\033[0m" << std::endl << std::endl;
}

void	PhoneBook::DISPLAY() const
{
	std::cout << std::endl << "\033[1;33m+-------------------------------------------+\033[0m" << std::endl;
	std::cout << "\033[1;33m|               ROLODEX CONTACTS            |\033[0m" << std::endl;
	std::cout << "\033[1;33m+-------------------------------------------+\033[0m" << std::endl;
	std::cout << "\033[1;33m|\033[0m" << std::setw(10) << "Index";
    std::cout << "\033[1;33m|\033[0m" << std::setw(10) << "Fst Name";
    std::cout << "\033[1;33m|\033[0m" << std::setw(10) << "Lst Name";
    std::cout << "\033[1;33m|\033[0m" << std::setw(10) << "Nickame";
    std::cout << "\033[1;33m|\033[0m" << std::endl;
	std::cout << "\033[1;33m+-------------------------------------------+\033[0m" << std::endl;
	for (int i = 0; i < _size; i++)
		this->_contact[i].display(i);
	std::cout << "\033[1;33m+-------------------------------------------+\033[0m\n" << std::endl;
}

void	PhoneBook::SEARCH(void) const
{
	long index;
	if (!_size)
	{
		std::cout << "sorry your rolodex is still empty." << std::endl;
		return ;
	}
	DISPLAY();
	while (std::cin.good())
	{
		std::cout << "please pick an valid index : ";
		if (std::cin >> index)
		{
			if (index > 0 && index <= _size)
			{
				this->_contact[index - 1].display_infos();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				return ;
			}
		}
		else
		{
			std::cin.clear();
			std::cin.ignore();
		}
	}
		
}
void	PhoneBook::ADD()
{
	static int i;

	if (i > 7)
		i = 0;
	this->_contact[i].get_contact_info();
	this->_contact[i].set_index(i);
	if (this->_size < 8)
		this->_size++;
	i++;
}
