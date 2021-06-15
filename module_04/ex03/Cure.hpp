#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */

public:
    //  Constructor
    Cure();
    Cure(Cure const& cure);

    //  Operator Overload
    Cure& operator=(Cure const& cure);
    
    //  Other Functions
    virtual AMateria* clone() const;  
    void use(ICharacter& target);
    //  Destructor
    virtual ~Cure();
};


#endif