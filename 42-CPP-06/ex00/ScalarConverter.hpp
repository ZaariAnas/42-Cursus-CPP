/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:39:07 by azari             #+#    #+#             */
/*   Updated: 2023/09/25 12:01:44 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ScalarConverter
{
        ScalarConverter();
        ScalarConverter(ScalarConverter& copy);
        ScalarConverter& operator=(ScalarConverter& other);
        ~ScalarConverter();
    public:
        static void convert(std::string litteral);
};