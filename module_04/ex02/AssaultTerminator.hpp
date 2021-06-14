#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
public:
    //  Constructors
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const& src);
    //  Operators Overload
    AssaultTerminator& operator=(AssaultTerminator const& src);
    //  Other Functions
    virtual ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
    ~AssaultTerminator();
};

#endif