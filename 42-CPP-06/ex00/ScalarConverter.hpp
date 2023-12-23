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
        static void ConvertCharVar(std::string&);
        static void ConvertIntVar(std::string&);
        static void ConvertFloatVar(std::string&);
        static void ConvertDoubleVar(std::string&);
        static bool ConvertSpecialVar(std::string&);
        static bool CheckStringValidity(std::string&);
        ScalarConverter();
        ScalarConverter(ScalarConverter& copy);
        ScalarConverter& operator=(ScalarConverter& other);
        ~ScalarConverter();
    public:
        static void convert(std::string&);
};

int raiseArgError();