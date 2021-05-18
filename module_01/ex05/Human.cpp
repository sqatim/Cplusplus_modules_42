#include "Human.hpp"

std::string Human::identify() const
{
    return (m_brain.identify());
}

Brain const& Human::getBrain() const
{
    /* this étant un pointeur sur un objet,*this est l'objet lui-même ! 
    Notre opérateur renvoie donc l'objet lui-même. */
    return (this->m_brain);
}