#include "Cure.hpp"

Cure::Cure()
{
    this->m_type = "cure";
    return;
}

Cure::Cure(Cure const& cure)
{
    *this = cure;
    return;
}

Cure& Cure::operator=(Cure const& cure)
{
    if(this != &cure)
    {

    }
    return *this;
}

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure;
    return (cure);
}


Cure::~Cure()
{

    return;
}