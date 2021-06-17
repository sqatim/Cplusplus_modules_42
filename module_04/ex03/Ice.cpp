#include "Ice.hpp"

Ice::Ice()
{
    this->m_type = "ice";
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
        
    }
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria *ice = new Ice;
    return (ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << m_type << " *" << std::endl;
}

Ice::~Ice()
{

    return;
}