#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : m_type(type), _xp(0)
{

}


std::string const& AMateria::getType() const
{
    return (this->m_type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
    this->_xp += 10;
}

AMateria::~AMateria()
{
}

// AMateria::AMateria()
// {

// }

// AMateria::AMateria()
// {

// }