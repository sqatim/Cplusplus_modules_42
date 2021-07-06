#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int m_number;
    static const int _nBits = 8;

public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    float toFloat(void) const;
    int toInt(void) const;
    Fixed& operator=(Fixed const& src);
    Fixed(Fixed const& src);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

std::ostream& operator<<(std::ostream& output, Fixed const& src);

#endif