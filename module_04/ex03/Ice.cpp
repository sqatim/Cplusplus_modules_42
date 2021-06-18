7#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    return;
}

// Ice::Ice(Ice const& ice)
// {
//     *this = ice;
//     return;
// }

Ice& Ice::operator=(Ice const& ice)
{
    if(this != &ice)
    {
        this->m_type = ice.m_type;
    }
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << m_type << " *" << std::endl;
}

Ice::~Ice()
{
    return;
}0.

.0  3
.
0/*-
.0147