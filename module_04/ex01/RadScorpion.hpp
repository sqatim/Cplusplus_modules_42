#ifndef RADSCORPION_H
#define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
    //  Constructors
    RadScorpion();
    RadScorpion(RadScorpion const& src);

    //  Operators Overload
    RadScorpion& operator=(RadScorpion const& src);
    //  Other Functions


    virtual ~RadScorpion();
};

#endif