#ifndef BWAK_HPP
#define BWAK_HPP

#include "Victim.hpp"

class Bwak : public Victim
{
private:
    Bwak();

public:
    Bwak(std::string name);
    Bwak(Bwak const& src);
    Bwak& operator=(Bwak const& src);
    virtual ~Bwak();
};

#endif