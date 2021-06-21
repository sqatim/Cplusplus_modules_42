#include "Zed.hpp"

Zed::Zed()
{
    this->m_hp = 80;
    this->m_type = "Zed";
    std::cout << "* Shadow *" << std::endl;
    return ;
}

Zed::Zed(Zed const& src)
{
    *this = src;
    return ;
}

Zed& Zed::operator=(Zed const& src)
{
    if(this != &src)
    {
        this->m_hp = src.m_hp;
        this->m_type = src.m_type;
    }
    return (*this);
}

Zed::~Zed()
{
    std::cout << "* No Way!! *" << std::endl;
    return ;
}