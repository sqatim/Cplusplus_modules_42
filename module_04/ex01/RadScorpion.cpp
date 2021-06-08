#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
    this->m_hp = 80;
    this->m_type = "RadScorpion";
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const& src)
{
    *this = src;
    return ;
}

RadScorpion& RadScorpion::operator=(RadScorpion const& src)
{
    if(this != &src)
    {
        this->m_hp = src.m_hp;
        this->m_type = src.m_type;
    }
    return (*this);
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}