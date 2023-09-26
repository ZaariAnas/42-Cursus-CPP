/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:39:06 by azari             #+#    #+#             */
/*   Updated: 2023/09/25 12:17:22 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter& copy){
    (void)copy;
}
ScalarConverter& ScalarConverter::operator=(ScalarConverter& other){
    (void)other;
    return *this;
}

std::string* toChar(double d){
    
    std::string *c = new std::string(1, static_cast<char>(d));
    if (isprint((*c)[0]))
        return c;
    return 0;
}

// void ScalarConverter::convert(std::string litteral){
    
//     std::cout << "char : " << *get_char(strtod(litteral.c_str(), NULL)) << std::endl;
// }
