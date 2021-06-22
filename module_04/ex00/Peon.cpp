#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog" << std::endl;
    return;
}

Peon::Peon(Peon const& src)
{
    *this = src;
    return;
}

Peon& Peon::operator=(Peon const& src)
{
    if(this != &src)
    {
        this->m_name = src.m_name;
    }
    return (*this);
}
void Peon::getPolymorphed() const
{
    std::cout << this->m_name << \
        "  has been turned into a pink pony!" << std::endl;
}
Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
    return;
}