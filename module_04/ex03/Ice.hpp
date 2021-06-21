#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */

public:
    //  Constructor
    Ice();

    //  Operator Overload
    Ice& operator=(Ice const& src);

    //  Other Functions
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

    //  Destructor
    ~Ice();
};


#endif