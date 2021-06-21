#include "Aboub.hpp"

Aboub::Aboub(std::string name) : Victim(name)
{
    std::cout << "Aboub bouba" << std::endl;
    return;
}

Aboub::Aboub(Aboub const& src)
{
    *this = src;
    return;
}

Aboub& Aboub::operator=(Aboub const& src)
{
    if(this != &src)
    {
        this->m_name = src.m_name;
    }
    return (*this);
}

Aboub::~Aboub()
{
    std::cout << "Aboooooo!..." << std::endl;
    return;
}