/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:22:35 by azari             #+#    #+#             */
/*   Updated: 2023/08/07 06:38:49 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename) : _InputFile(filename)
{
	_OutputFile = _InputFile + ".replace";
}

Sed::~Sed(){}

int	Sed::replace(std::string s1, std::string s2)
{
	std::ifstream	infile(_InputFile);
	std::string		buffer;
	size_t			pos;
	int				i;

	if (!infile)
		return (std::cerr << "\n\033[3;31merror : failed to open INPUT file\n", 1);
	std::ofstream	outfile(_OutputFile);
	if (!outfile)
		return (std::cerr << "\n\033[3;31merror : failed to open OUTPUT file\n", 1);
	i = -1;
	while (std::getline(infile, buffer) && infile.is_open())
	{
		pos = pos = buffer.find(s1);
		while (pos != std::string::npos)
		{
			buffer.erase(pos, s1.length());
			buffer.insert(pos, s2);
			pos = buffer.find(s1.c_str(), pos + s2.length(), s1.length());
		}
		outfile << buffer << std::endl;
		i++;
	}
	infile.close();
	return 0;
}
