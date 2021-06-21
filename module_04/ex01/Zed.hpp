#ifndef ZED_H
#define ZED_H

#include "Enemy.hpp"

class Zed : public Enemy
{
private:

public:
    //  Constructors
    Zed();
    Zed(Zed const& src);

    //  Operators Overload
    Zed& operator=(Zed const& src);
    //  Other Functions


    virtual ~Zed();
};

#endif