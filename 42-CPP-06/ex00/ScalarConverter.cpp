/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:39:06 by azari             #+#    #+#             */
/*   Updated: 2023/12/21 12:59:11 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter& copy){(void)copy;}
ScalarConverter& ScalarConverter::operator=(ScalarConverter& other){(void)other; return *this;}

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

void ScalarConverter::ConvertCharVar(std::string& litteral)
{
    int res = static_cast<int>(std::atof(litteral.c_str()));
    if (res < 0 || res > 127)
        std::cout << "char  : Impossible" << std::endl;
    else if (res < 32 || res > 126)
        std::cout << "char  : Non displayable" << std::endl;
    else
        std::cout << "char  : \'" << static_cast<char>(std::atof(litteral.c_str())) << "\'" << std::endl;
}

void ScalarConverter::ConvertIntVar(std::string& litteral)
{
    long res = static_cast<long>(std::atof(litteral.c_str()));
    if (res < std::numeric_limits<int>::min() || res > std::numeric_limits<int>::max())
        std::cout << "int   : Impossible" << std::endl;
    else
        std::cout << "int   : " << static_cast<int>(std::atof(litteral.c_str())) << std::endl;
}

void ScalarConverter::ConvertFloatVar(std::string& litteral)
{
    float res = std::atof(litteral.c_str());
    if (res - static_cast<int>(res) == 0)
        std::cout << "float : " << res << ".0f" << std::endl;
    else
        std::cout << "float : " << res << "f" << std::endl;
}

void ScalarConverter::ConvertDoubleVar(std::string& litteral)
{
    double res = std::atof(litteral.c_str());
    if (res - static_cast<int>(res) == 0)
        std::cout << "double: " << res << ".0" << std::endl;
    else
        std::cout << "double: " << res << std::endl;
}

bool ScalarConverter::ConvertSpecialVar(std::string& litteral)
{
    static std::string specialVar[6] = {V_NAN, V_NANF, V_INF, V_INFF, V_MINF, V_MINFF};
    static std::string specialVarfloat[6] = {V_NANF, V_NANF, V_INFF, V_INFF, V_MINFF, V_MINFF};
    static std::string specialVardouble[6] = {V_NAN, V_NAN, V_INF, V_INF, V_MINF, V_MINF};

    for (int i = 0; i < 6; i++)
    {
        if (litteral == specialVar[i])
        {
            std::cout << "char  : impossible" << std::endl;
            std::cout << "int   : impossible" << std::endl;
            std::cout << "float : " << specialVarfloat[i] << std::endl;
            std::cout << "double: " << specialVardouble[i] << std::endl;
            return true;
        }
    }
    if (litteral.length() == 3 && litteral[0] == '\'' && litteral[2] == '\'')
    {
        std::cout << "char  : " << litteral[1] << std::endl;
        std::cout << "int   : " << static_cast<int> (litteral[1]) << std::endl;
        std::cout << "float : " << static_cast<float> (litteral[1]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double> (litteral[1]) << ".0" << std::endl;
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
    if(litteral[i] == '+' || litteral[i] == '-'){ i++; sign = true; }
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
    if (ConvertSpecialVar(litteral))
        return;
    else if (CheckStringValidity(litteral) == false)
        return raiseValueError();
    ConvertCharVar(litteral);
    ConvertIntVar(litteral);
    ConvertFloatVar(litteral);
    ConvertDoubleVar(litteral);
}