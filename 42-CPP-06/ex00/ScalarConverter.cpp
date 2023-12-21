/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:39:06 by azari             #+#    #+#             */
/*   Updated: 2023/12/21 10:22:58 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter& copy){(void)copy;}
ScalarConverter& ScalarConverter::operator=(ScalarConverter& other){(void)other; return *this;}

int ScalarConverter::_int = 0;
float ScalarConverter::_float = 0;
double ScalarConverter::_double = 0;
char ScalarConverter::_char = 0;
bool ScalarConverter::_Convertible = false;
bool ScalarConverter::_Displayable = false;
bool ScalarConverter::_Impossible = false;
bool ScalarConverter::_CharOutOfRange = false;
bool ScalarConverter::_IntOutOfRange = false;
bool ScalarConverter::_FloatOutOfRange = false;
bool ScalarConverter::_DoubleOutOfRange = false;

int raiseArgError()
{
    std::cout 	<< "\n\033[3;31merror : unvalid input"
                << "\nusage : ./convert \"value\"\n" 
                << std::endl;
    return 1;
}
void raiseValueError()
{
    std::cout 	<< "\n\033[3;31merror : unvalid value"
                << "\nusage : ./convert \"value : Int | Float | Double | Char\"\n" 
                << std::endl;
}

bool ConvertSpecialVar(std::string& litteral)
{
    static std::string specialVar[6] = {V_NAN, V_NANF, V_INF, V_INFF, V_MINF, V_MINFF};
    static std::string specialVarfloat[6] = {V_NANF, V_NANF, V_INFF, V_INFF, V_MINFF, V_MINFF};
    static std::string specialVardouble[6] = {V_NAN, V_NAN, V_INF, V_INF, V_MINF, V_MINF};

    for (int i = 0; i < 6; i++)
    {
        if (litteral == specialVar[i])
        {
            std::cout << "Char  : impossible" << std::endl;
            std::cout << "Int   : impossible" << std::endl;
            std::cout << "Float : " << specialVarfloat[i] << std::endl;
            std::cout << "Double: " << specialVardouble[i] << std::endl;
            return true;
        }
    }
    if (litteral[0] == '\'' && litteral[litteral.length() - 1] == '\'')
    {
        // ConvertCharVar(litteral);
        return true;
    }
    return false;
}

bool ScalarConverter::CheckStringValidity(std::string& litteral)
{
    int f = 0;
    int dot = 0;
    bool sign = false;
    size_t i = 0;
    if(litteral[i] == '+' || litteral[i] == '-')
    {
        i++;
        sign = true;
    }
    if(litteral.length() == i)
        return false;
    for (; i < litteral.length(); i++)
    {
        if(litteral[i] == 'f' && !f)
            f++;
        else if(litteral[i] == '.' && !dot)
            dot++;
        else if(!std::isdigit(litteral[i]) || f)
            return false;
    }
    if ((f && !dot) || (dot && litteral.length() == 1)
                    || (litteral.at(litteral.length() - 1) == '.' && sign)
                    || (f && dot && litteral.length() == 2)
                    || (f && dot && sign && litteral.length() == 3))
        return false;
    return true;
}

void ScalarConverter::convert(std::string& litteral)
{
    float a = .1f;
    std::cout << a << std::endl;
    if (ConvertSpecialVar(litteral))
        return;
    else if (CheckStringValidity(litteral) == false)
        return raiseValueError();
    std::cout << "valid input" << std::endl;
        // return raiseTypeError();
}