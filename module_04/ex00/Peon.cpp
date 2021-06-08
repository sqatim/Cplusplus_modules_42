#include "Peon.hpp"

Peon::Peon()
{

    return;
}

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

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
    return;
}