/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:01:24 by azari             #+#    #+#             */
/*   Updated: 2023/08/02 15:02:10 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

class Sed{
	
	std::string _InputFile;
	std::string _OutputFile;
public:

	Sed(std::string filename);
	~Sed();
	int	replace(std::string s1, std::string s2);
};

#endif