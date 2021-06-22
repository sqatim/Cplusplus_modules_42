#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    return;
}

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals  " << target.getName() << "’s wounds *" << std::endl;
}


Cure::~Cure()
{
    return;
}