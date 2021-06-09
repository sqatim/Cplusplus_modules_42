#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>

class AssaultTerminator
{
private:
    /* data */
public:
    //  Constructors
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const& src);
    //  Operators Overload
    AssaultTerminator& operator=(AssaultTerminator const& src);
    //  Other Functions
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
    ~AssaultTerminator();
};

#endif