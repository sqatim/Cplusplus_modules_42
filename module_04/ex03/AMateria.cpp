#include "AMateria.hpp"

// AMateria::AMateria()
// {
// }

AMateria::AMateria(std::string const &type) : m_type(type), _xp(0)
{
}



std::string const &AMateria::getType() const
{
    return (this->m_type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

// AMateria& AMateria::operator=(AMateria const & src)
// {
//     if(this != &src)
//     {
//         this->m_type = src.m_type;
//         this->_xp = src._xp;
//         std::cout << "w b9a fiya lhal" << std::endl;
//     }
//     return (*this);
// }

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