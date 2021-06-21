#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : m_type(type), _xp(0)
{

    return ;
}

AMateria::AMateria(AMateria const& src)
{
    *this = src;
    return ;
}


AMateria& AMateria::operator=(AMateria const & src)
{
    if(this != &src)
    {
        this->m_type = src.m_type;
        this->_xp = src._xp;
    }
    return (*this);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    this->_xp += 10;
}

std::string const &AMateria::getType() const
{
    return (this->m_type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

AMateria::~AMateria()
{
    
}
