#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
private:
    int m_number;
    static const int _nBits = 8;

public:
    Fixed();
    Fixed& operator=(Fixed const& src); 
    Fixed(Fixed const& src);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

#endif