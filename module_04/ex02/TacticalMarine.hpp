#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
    /* data */
public:
    TacticalMarine();
    TacticalMarine(TacticalMarine const& src);
    TacticalMarine& operator=(TacticalMarine const& src);
    virtual ISpaceMarine* clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;
    ~TacticalMarine();
};

#endif