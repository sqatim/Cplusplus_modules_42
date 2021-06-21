#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    //  Constructor
    Ice();
    // Ice(Ice const& src);

    //  Operator Overload
    // Ice& operator=(Ice const& src);

    //  Other Functions
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

    //  Destructor
    ~Ice();
};


#endif