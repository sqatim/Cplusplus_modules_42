#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
    //  Constructor
    SuperMutant();
    SuperMutant(SuperMutant const& src);

    //  Operators Overload
    SuperMutant& operator=(SuperMutant const& src);
    
    //  Other Functions
    virtual void takeDamage(int);
    ~SuperMutant();
};


#endif