/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:59:01 by azari             #+#    #+#             */
/*   Updated: 2023/07/26 11:40:22 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	is_empty(std::string buffer)
{
	for (int i = 0; i  < (int)buffer.length(); i++)
		if (buffer[i] != ' ' && buffer[i] != '\t')
			return false;
	return true;
}

bool	is_digit(std::string buffer)
{
	if (buffer.empty())
		return false;
	for (int i = 0; i  < (int)buffer.length(); i++)
		if (!isdigit(buffer[i]))
			return false ;
	return true;
}

std::string	getdata(std::string dataname)
{
	std::string buffer;
	
	buffer.clear();
	while (std::cin.good() && is_empty(buffer))
	{
		std::cout << dataname;
		buffer.clear();
		std::getline(std::cin, buffer);
	}
	return (buffer);
}

std::string	getdatanum(std::string dataname)
{
	std::string buffer;

	buffer.clear();
	while (std::cin.good() && !is_digit(buffer))
	{
		std::cout << dataname;
		buffer.clear();
		std::getline(std::cin, buffer);
	}
	return (buffer);
}

void	Contact::set_index(int index)
{
	_index = index;
}

void	Contact::get_contact_info(void)
{
	std::cout << std::endl;
	this->_firstName = getdata("\033[1;33mFirst Name      : \033[0m");
	this->_lastName = getdata("\033[1;33mLast Name       : \033[0m");
	this->_nickName = getdata("\033[1;33mNickame         : \033[0m");
	this->_phoneNumber = getdatanum("\033[1;33mPhone Number    : \033[0m");
	this->_darkestSecret = getdata("\033[1;33mDarkest Secret  : \033[0m");
}
std::string Contact::setfield(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::display(int index) const
{
    std::cout << "\033[1;33m|\033[0m" << std::setw(10) << index + 1;
    std::cout << "\033[1;33m|\033[0m" << std::setw(10) << this->setfield(this->_firstName);
    std::cout << "\033[1;33m|\033[0m" << std::setw(10) << this->setfield(this->_lastName);
    std::cout << "\033[1;33m|\033[0m" << std::setw(10) << this->setfield(this->_nickName);
    std::cout << "\033[1;33m|\033[0m" << std::endl;
}

void    Contact::display_infos(void) const
{
	std::cout << std::endl << "\033[1;33mFirst Name     : \033[0m" << this->_firstName << std::endl;
	std::cout << "\033[1;33mLast Name      : \033[0m" << this->_lastName << std::endl;
	std::cout << "\033[1;33mNickname       : \033[0m" << this->_nickName << std::endl;
	std::cout << "\033[1;33mPhone Number   : \033[0m" << this->_phoneNumber << std::endl;
	std::cout << "\033[1;33mDarkest Secret : \033[0m" << this->_darkestSecret << std::endl;
}
