#include "Victim.hpp"

Victim::Victim() : m_name("Default")
{
    std::cout << "Some random victim called " << this->m_name \
            << " just appeared!" << std::endl;
    return ;
}

Victim::Victim(std::string name) : m_name(name)
{
    std::cout << "Some random victim called " << this->m_name \
            << " just appeared!" << std::endl;
    return ;
}

Victim::Victim(Victim const& src)
{
    *this = src;
    return ;
}

Victim& Victim::operator=(Victim const& src)
{
    if(this != &src)
    {
        this->m_name = src.m_name;
    }
    return (*this);
}

void Victim::getPolymorphed() const
{
    std::cout << this->m_name << \
        " has been turned into a cute little sheep!" << std::endl;
}

std::string Victim::getName() const
{
    return (this->m_name);
}


Victim::~Victim()
{
    std::cout << "Victim " << this->m_name << \
        " just died for no apparent reason!" << std::endl;
    return ;
}

std::ostream& operator<<(std::ostream& output , Victim const& src)
{
    output << "I'm " << src.getName() << " and I like otters!" << std::endl;
    return (output);
}