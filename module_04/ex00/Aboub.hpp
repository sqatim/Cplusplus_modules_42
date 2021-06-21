#ifndef ABOUB_HPP
#define ABOUB_HPP

#include "Victim.hpp"

class Aboub : public Victim
{
private:
    Aboub();

public:
    Aboub(std::string name);
    Aboub(Aboub const& src);
    Aboub& operator=(Aboub const& src);
    virtual ~Aboub();
};

#endif