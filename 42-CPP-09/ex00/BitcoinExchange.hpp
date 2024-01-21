#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "MACS.hpp"

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
        bool checkDateInput(std::string & date);
        void checkDateCsv(std::fstream & file, std::string & date);
        double checkValue(std::string & value);
        void checkExchangeRate(std::fstream & file, std::string &);
        void raiseRuntimeException(const std::string & error, std::fstream & file);
        void raiseRuntimeExceptionOut(const std::string& error);
        void generateBitcoinValue(std::string & date, double value);
    private:
        std::map<std::string, double> _data_csv;
};