#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
    /* data */
public:
    //  Constructors;
    PowerFist();
    PowerFist(PowerFist const& src);

    //  Operators Overload
    PowerFist& operator=(PowerFist const& src);

    //  Other Functions
    virtual void attack() const;

    virtual ~PowerFist();
};

#endif