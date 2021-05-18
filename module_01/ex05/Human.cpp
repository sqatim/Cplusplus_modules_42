#include "Human.hpp"

std::string Human::identify() const
{
    return (m_brain.identify());
}

Brain const& Human::getBrain() const
{
    return (this->m_brain);
}