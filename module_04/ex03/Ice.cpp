#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    return;
}

// Ice& Ice::operator=(Ice const& ice)
// {
//     if(this != &ice)
//     {
//         this->m_type = ice.m_type;
//     }
//     return *this;
// }

AMateria* Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    return;
}