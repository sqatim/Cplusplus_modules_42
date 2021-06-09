#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad
{
private:
    /* data */
public:
    Squad();
    Squad(Squad const& src);
    Squad& operator=(Squad const& src);
    virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int) const;
    virtual int push(ISpaceMarine*);
    ~Squad();
};

#endif