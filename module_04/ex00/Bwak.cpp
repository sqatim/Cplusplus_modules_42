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

void Bwak::getPolymorphed() const
{
    std::cout << this->m_name << \
        "  has been turned into a black pony!" << std::endl;
}

Bwak::~Bwak()
{
    std::cout << "Kwwwwwab..." << std::endl;
    return;
}