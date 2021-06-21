#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
private:
    AMateria();
protected:
    std::string m_type;
    unsigned int _xp;
public:
    // Constructor
    AMateria(std::string const & type);
    AMateria(AMateria const& src);

    // Operator Overloading
    AMateria& operator=(AMateria const & src);

    // Other Functions
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
   
    // Getters
    unsigned int getXP() const;
    std::string const & getType() const;
    
    // Destructor
    virtual ~AMateria();
};


#endif