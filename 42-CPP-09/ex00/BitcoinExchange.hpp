#pragma once
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
    public:
        BitcoinExchange(std::fstream & file, std::fstream & input);
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &src);
        BitcoinExchange &operator=(BitcoinExchange const &src);
        void parseCsvFile(std::fstream & file);
        void parseInputFile(std::fstream & input);
        void print_value(std::string &);
        void checkDate(std::fstream & file, std::string & date);
        void checkExchangeRate(std::fstream & file, std::string &);
        void raiseRuntimeException(const std::string & error, std::fstream & file);
    private:
        std::map<std::string, double> _data;
};