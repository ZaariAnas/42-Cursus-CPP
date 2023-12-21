/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:39:07 by azari             #+#    #+#             */
/*   Updated: 2023/12/20 15:38:05 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define V_NAN "nan"
#define V_NANF "nanf"
#define V_INF "+inf"
#define V_INFF "+inff"
#define V_MINF "-inf"
#define V_MINFF "-inff"

class ScalarConverter
{

    private:
        static int  _int;
        static float _float;
        static double _double;
        static char _char;
        static bool _special;
        static bool _Displayable;
        static bool _Convertible;
        static bool _Impossible;
        static bool _CharOutOfRange;
        static bool _IntOutOfRange;
        static bool _FloatOutOfRange;
        static bool _DoubleOutOfRange;
        static void ConverCharVar(std::string&);
        static void ConverIntVar(std::string&);
        static void ConverFloatVar(std::string&);
        static void ConverDoubleVar(std::string&);
        static bool ConverSpecialVar(std::string&);
        static bool CheckStringValidity(std::string&);
        ScalarConverter();
        ScalarConverter(ScalarConverter& copy);
        ScalarConverter& operator=(ScalarConverter& other);
        ~ScalarConverter();
    public:
        static void convert(std::string&);
};

int raiseArgError();