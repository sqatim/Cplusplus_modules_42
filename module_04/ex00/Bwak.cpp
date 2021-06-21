#include "Bwak.hpp"

Bwak::Bwak(std::string name) : Victim(name)
{
    std::cout << "Bwak bwaaaaaaak" << std::endl;
    return;
}

Bwak::Bwak(Bwak const& src)
{
    *this = src;
    return;
}

Bwak& Bwak::operator=(Bwak const& src)
{
    if(this != &src)
    {
        this->m_name = src.m_name;
    }
    return (*this);
}

Bwak::~Bwak()
{
    std::cout << "Kwwwwwab..." << std::endl;
    return;
}