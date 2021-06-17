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
    return new Cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals  " << m_type << "’s wounds *" << std::endl;
}


Cure::~Cure()
{

    return;
}