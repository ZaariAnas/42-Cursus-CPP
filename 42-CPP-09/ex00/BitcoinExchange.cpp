#include "BitcoinExchange.hpp"
#include <cctype>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <stdexcept>

BitcoinExchange::BitcoinExchange(std::fstream &file, std::fstream& input)
{
    parseCsvFile(file);
    parseInputFile(input);
}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
    new (this) BitcoinExchange(src);
    return *this;
}

void BitcoinExchange::raiseRuntimeException(const std::string& error, std::fstream & file)
{
    file.close();
    if (!_data.empty())
        _data.clear();
    throw std::runtime_error(error);
}

void    BitcoinExchange::checkDate(std::fstream & file, std::string & date)
{
    if (date.length() != 10)
        raiseRuntimeException("\n\033[3;31merror: unvalid date format\nusage: yyyy-mm-dd\n", file);
    for (int i =0; i < 10; i++)
    {
        if (!std::isdigit(date[i]) && date[i] != '-')
            raiseRuntimeException("\n\033[3;31merror: unvalid date format\n", file);
    }
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (year < 2009 || year > 2023 || month < 1 || month > 12 || day < 1 || day > 31)
        raiseRuntimeException("\n\033[3;31merror: unvalid date format\nusage: yyyy-mm-dd (valid range: 2009-01-03 to 2023-31-12)\n", file);
    if (month == 2 && day > 28 && !(((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0))
		raiseRuntimeException("\n\033[3;31merror: unvalid date\n", file);

	int month_limits[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (day > month_limits[month - 1])
		raiseRuntimeException("\n\033[3;31merror: unvalid date\n", file);

}

void    BitcoinExchange::checkExchangeRate(std::fstream & file, std::string & e_rate)
{
    for (int i = 0; i < (int)e_rate.length(); i++)
    {
        if (!std::isdigit(e_rate[i]) && e_rate[i] != '.')
            raiseRuntimeException("\n\033[3;31merror: unvalid e_rate format\n", file);
    }
}

void    BitcoinExchange::parseCsvFile(std::fstream &file)
{
    std::string line;

    std::getline(file, line);
    if (line.empty())
        throw std::runtime_error("\n\033[3;31merror: empty csv file\n\n\033[0m");
    else if (line != "date,exchange_rate")
        throw std::runtime_error("\n\033[3;31merror: unvalid csv header\n\n\033[0m");
    while (std::getline(file, line))
    {
        std::string date = line.substr(0, line.find(','));
        std::string e_rate = line.substr(line.find(',') + 1);
        checkDate(file, date);
        checkExchangeRate(file, e_rate);
        _data[date] = std::atof(e_rate.c_str());
    }
    if (_data.size() == 0)
        raiseRuntimeException("\n\033[3;31merror: data required in csv file\n", file);
    std::cout << "\n\033[3;32mCSV file parsed successfully\n\n\033[0m";
    file.close();
}

BitcoinExchange::~BitcoinExchange() {}