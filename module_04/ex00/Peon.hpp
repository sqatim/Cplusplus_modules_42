#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:

public:
    Peon();
    Peon(std::string name);
    Peon(Peon const& src);
    Peon& operator=(Peon const& src);
    ~Peon();
};

#endif