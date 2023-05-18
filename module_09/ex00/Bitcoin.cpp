#include "Bitcoin.hpp"

Bitcoin::Bitcoin()
{
    std::ifstream bitcoinPrices("data.csv");
    std::string str;
    std::string date;
    std::string exchangeRate;

    if (!bitcoinPrices.is_open())
        throw std::string("Error: Problem is occured when opening data.csv file");
    std::getline(bitcoinPrices, str);
    while (bitcoinPrices)
    {
        std::getline(bitcoinPrices, str);
        std::stringstream stringStream(str.c_str());
        std::getline(stringStream, date, ',');
        // std::cout << date << "," << exchangeRate << std::endl;
        std::getline(stringStream, exchangeRate, ',');
        this->m_mapList[date] = std::stod(exchangeRate);
    }
}

int checkIfNumber(const char *str)
{
    for (int index = 0; str[index]; index++)
    {
        if (!isdigit(str[index]))
            return (0);
    }
    return (1);
}

bool isValidDate(int year, int month, int day)
{
    bool isLeap;

    if (month < 1 || month > 12)
        return (false);
    if (day < 1 || day > 31)
        return (false);
    isLeap = year % 4 == 0;
    if (month == 2)
    {
        if (isLeap && day >= 30)
            return (false);
        else if (!isLeap && day >= 29)
            return (false);
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return (false);
    return (true);
}

int checkDate(char *str, std::string &dateKey)
{
    std::string date(str);
    std::string year;
    std::string month;
    std::string day;
    std::stringstream stringStream(str);
    int check;

    check = 1;
    if (date.length() != 10 || str[4] != '-' || str[7] != '-')
        check = 0;
    if (!getline(stringStream, year, '-') || year.length() != 4 || !checkIfNumber(year.c_str()))
        check = 0;
    else if (!getline(stringStream, month, '-') || month.length() != 2 || !checkIfNumber(month.c_str()))
        check = 0;
    else if (!getline(stringStream, day, '-') || day.length() != 2 || !checkIfNumber(day.c_str()))
        check = 0;
    else if (!isValidDate(stoi(year), stoi(month), stoi(day)))
        check = 0;
    if (check == 0)
        std::cerr << "Error: bad input => " << str << std::endl;
    dateKey = str;
    return (check);
}

int checkValue(char *str, double &value)
{
    std::istringstream iss(str);
    int check;

    iss >> value;
    check = 1;
    if (!iss.eof() || iss.fail())
    {
        std::cerr << "Error: bad input => " << str << std::endl;
        check = 0;
    }
    else if (value < 0 || value > 1000)
    {
        if (value < 0)
            std::cerr << "Error: not a positive number" << std::endl;
        else
            std::cerr << "Error: too large a number" << std::endl;
        check = 0;
    }
    return (check);
}

bool Bitcoin::checkLine(char *line, std::string &date, double &value)
{
    char *parsed;
    int index;

    parsed = strtok(line, " \t");
    index = 0;
    while (parsed)
    {
        if (index == 1)
        {
            if (this->m_syntax[index] != parsed)
            {
                std::cerr << "Error: Please check the separator" << std::endl;
                return (false);
            }
        }
        else
        {
            if (this->m_syntax[index] == "date" && !checkDate(parsed, date))
                return (false);
            else if (this->m_syntax[index] == "value" && !checkValue(parsed, value))
                return (false);
        }
        parsed = strtok(NULL, " \t");
        index++;
    }
    return true;
}

void Bitcoin::checkSyntax(char *str)
{
    char *parsed;
    int index;

    parsed = strtok(str, " \t");
    index = 0;
    while (parsed)
    {
        if (index == 0)
        {
            if (strcmp(parsed, "date") && strcmp(parsed, "value"))
                throw std::string("Error: you must choose a syntax (date | value)");
        }
        else if (index == 1)
        {
            if (strcmp(parsed, "|") && strcmp(parsed, ","))
                throw std::string("Error: you must choose a separator between '|' or ',' ");
        }
        else if (index == 2)
        {
            if (this->m_syntax[0] == "date")
            {
                if (strcmp(parsed, "value"))
                    throw std::string("Error: you must use like the folowing a syntax (date | value)");
            }
            else if (this->m_syntax[0] == "value")
            {
                if (strcmp(parsed, "date"))
                    throw std::string("Error: you must use like the folowing a syntax (value | date)");
            }
        }
        else
            throw std::string("Error: Problem in the syntax.");
        this->m_syntax[index] = parsed;
        parsed = strtok(NULL, " \t");
        index++;
    }
    if (index != 3)
        throw std::string("Error: Problem in the syntax.");
}

void Bitcoin::extractPrice(const std::string &date, const double &value)
{
    std::map<std::string, double>::iterator it, itlower;

    it = this->m_mapList.find(date);
    if (it == this->m_mapList.end())
    {
        it = this->m_mapList.lower_bound(date);
        if (it != this->m_mapList.begin())
            it--;
    }
    std::cout << std::fixed << std::setprecision(2) << date << " => " << value << " = " << it->second * value << std::endl;
}

std::string Bitcoin::calculePrices(char *file)
{
    std::ifstream inputFile(file);
    std::string str;
    std::string date;
    double value;

    if (!inputFile.is_open())
        throw std::string("Error: Problem is occured when opening file");
    std::getline(inputFile, str);
    this->checkSyntax((char *)str.c_str());
    while (std::getline(inputFile, str))
    {
        if (this->checkLine((char *)str.c_str(), date, value))
            this->extractPrice(date, value);
    }
    return (str);
}

Bitcoin::~Bitcoin()
{
}
