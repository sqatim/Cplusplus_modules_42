#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    return;
}

// Cure::Cure(Cure const& cure)
// {
//     *this = cure;
//     return;
// }

// Cure& Cure::operator=(Cure const& cure)
// {
//     if(this != &cure)
//     {
//         std::cout << "salam a wlad nasss en colour" << std::endl;
//     }
//     return *this;
// }

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals  " << target.getName() << "’s wounds *" << std::endl;
}


Cure::~Cure()
{
    return;
}