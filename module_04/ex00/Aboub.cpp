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

void Aboub::getPolymorphed() const
{
    std::cout << this->m_name << \
        "  has been turned into a red pony!" << std::endl;
}

Aboub::~Aboub()
{
    std::cout << "Aboooooo!..." << std::endl;
    return;
}