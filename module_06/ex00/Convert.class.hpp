#ifndef CONVERT_CLASS_HPP
#define CONVERT_CLASS_HPP

#include <iostream>
#include <cmath>
#include <limits>

class Convert
{
private:
    int m_intNumber;
    float m_floatNumber;
    double m_doubleNumber;
    char m_character;
    Convert();
public:
    class ImpossibleException: public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    
    Convert(std::string number);
    Convert(Convert const& src);
    void isNanInf();
    void isCorrect();
    void convertToDouble(char character);
    void convertToFloat();
    void convertToInt();
    void convertToChar();
    Convert& operator=(Convert const& src);
    ~Convert();
};


typedef struct data
{
    std::string inf;
    std::string nInf;
    std::string nInfF;
    std::string nanF;
    std::string nan;
    std::string pInf;
    std::string pInfF;
}   t_data;
#endif