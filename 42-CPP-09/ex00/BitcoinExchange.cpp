#include "BitcoinExchange.hpp"
#include "MACS.hpp"
#include <utility>

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
    if (!_data_csv.empty())
        _data_csv.clear();
    throw std::runtime_error(error);
}

void BitcoinExchange::raiseRuntimeExceptionOut(const std::string& error)
{
    std::cout << error << std::endl;
}

bool    BitcoinExchange::checkDateInput(std::string & date)
{
    if (date.length() != 10)
        return (raiseRuntimeExceptionOut(UNVALID_DATE), false);
    for (int i =0; i < 10; i++)
    {
        if (!std::isdigit(date[i]) && date[i] != '-')
            return (raiseRuntimeExceptionOut(UNVALID_DATE), false);
    }
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (year < 2009 || year > 2023 || month < 1 || month > 12 || day < 1 || day > 31)
        return (raiseRuntimeExceptionOut(UNVALID_DATE_RANGE), false);
    if (month == 2 && day > 28 && !(((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0))
		return (raiseRuntimeExceptionOut(UNVALID_DATE_DAY), false);

	int month_limits[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (day > month_limits[month - 1])
		return (raiseRuntimeExceptionOut(UNVALID_DATE_DAY), false);
    return true;

}

void    BitcoinExchange::checkDateCsv(std::fstream & file, std::string & date)
{
    if (date.length() != 10)
        raiseRuntimeException(UNVALID_DATE, file);
    for (int i =0; i < 10; i++)
    {
        if (!std::isdigit(date[i]) && date[i] != '-')
            raiseRuntimeException(UNVALID_DATE, file);
    }
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (year < 2009 || year > 2023 || month < 1 || month > 12 || day < 1 || day > 31)
        raiseRuntimeException(UNVALID_DATE_RANGE, file);
    if (month == 2 && day > 28 && !(((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0))
		raiseRuntimeException(UNVALID_DATE_DAY, file);

	int month_limits[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (day > month_limits[month - 1])
		raiseRuntimeException(UNVALID_DATE_DAY, file);

}

void    BitcoinExchange::checkExchangeRate(std::fstream & file, std::string & e_rate)
{
    for (int i = 0; i < (int)e_rate.length(); i++)
    {
        if (!std::isdigit(e_rate[i]) && e_rate[i] != '.')
            raiseRuntimeException(UNVALID_E_RATE, file);
    }
}

double    BitcoinExchange::checkValue(std::string & value)
{
    if(*value.begin() == '.' || *value.rbegin() == '.' || value.empty() || value.at(0) == ' ')
    {
        raiseRuntimeExceptionOut(UNVALID_VALUE);
        return -1;
    }
    for (int i = 0; i < (int)value.length(); i++)
    {
        if (value[i] )
            continue;
        if (!std::isdigit(value[i]) && value[i] != '.')
            raiseRuntimeExceptionOut(UNVALID_VALUE);
    }
    double val = std::strtod(value.c_str(), NULL);
    if (val < 0 || val > 1000)
        raiseRuntimeExceptionOut((val < 0) ? NEGATIVE_NUM : NUMBER_TOO_LARGE);
    return val;
}

void    BitcoinExchange::generateBitcoinValue(std::string & date, double value)
{
    std::map<std::string, double>::iterator it_date = _data_csv.lower_bound(date);
    if ((*it_date).first != date && it_date != _data_csv.begin())
        it_date--;
    double e_rate = (*it_date).second;
    double b_value = value * e_rate;
    std::cout << date << " => " << e_rate << " = " << b_value << std::endl;
}

void    BitcoinExchange::parseCsvFile(std::fstream &file)
{
    std::string line;

    std::getline(file, line);
    if (line.empty())
        raiseRuntimeException(EMPTY_CSV_FILE, file);
    else if (line != "date,exchange_rate")
        raiseRuntimeException(UNVAILD_CSV_HEADER, file);
    while (std::getline(file, line))
    {
            std::string date = line.substr(0, line.find(','));
            std::string e_rate = line.substr(line.find(',') + 1);
            checkDateCsv(file, date);
            checkExchangeRate(file, e_rate);
            _data_csv.insert(std::make_pair(date, std::atof(e_rate.c_str())));
    }
    if (_data_csv.size() == 0)
        raiseRuntimeException(NO_DATA, file);
    file.close();
}

void   BitcoinExchange::parseInputFile(std::fstream &input)
{
    std::string line;
    bool parsedData = 0;

    std::getline(input, line);
    if (line.empty())
        raiseRuntimeException(EMPTY_INPUT_FILE, input);
    else if (line != "date | value")
        raiseRuntimeException(UNVAILD_INPUT_HEADER, input);
    while (std::getline(input, line))
    {
            parsedData = true;
            if (line.find(" | ") == std::string::npos)
            {
                raiseRuntimeExceptionOut(UNVAILD_INPUT_FORMAT);
                continue;
            }
            std::string date = line.substr(0, line.find(" | "));
            std::string value = line.substr(line.find(" | ") + 3);
            double i_value = checkValue(value);
            if (i_value != -1 && checkDateInput(date))
                generateBitcoinValue(date, i_value);
    }
    if (line.empty() && parsedData == 0)
        raiseRuntimeException(NO_DATA, input);
    input.close();
}

BitcoinExchange::~BitcoinExchange() {}