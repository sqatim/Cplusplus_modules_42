#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : m_name(name), m_title(title)
{
    std::cout << this->m_name << ", " << this->m_title << ", is born!" << std::endl;
    return;
}

Sorcerer::Sorcerer(Sorcerer const& src)
{
    *this = src;
    return ;
}

Sorcerer& Sorcerer::operator=(Sorcerer const& src)
{
    if(this != &src)
    {
        this->m_name = src.m_name;
        this->m_title = src.m_title;
    }
    return (*this);
}

std::string Sorcerer::getName() const
{
    return (this->m_name);
}

std::string Sorcerer::getTitle() const
{
    return (this->m_title);
}

std::ostream& operator<<(std::ostream& output,Sorcerer const& src)
{
    output << "I am " << src.getName() << ", " << \
        src.getTitle() << ", and I like ponies!" << std::endl;
    return (output);
}

void  Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
    return ;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->m_name << ", " << this->m_title << \
        ",  is dead. Consequences will never be the same!" << std::endl;
    return ;
}