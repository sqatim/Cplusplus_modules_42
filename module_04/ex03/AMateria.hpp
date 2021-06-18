#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
protected:
    std::string m_type;
    unsigned int _xp;
public:
    // AMateria();
    AMateria(std::string const & type);
    // AMateria& operator=(AMateria const & src);
    // [...]
    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    virtual ~AMateria();
};


#endif