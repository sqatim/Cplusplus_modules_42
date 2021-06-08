#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
    this->m_hp = 170;
    this->m_type = "Super Mutant";
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return ;
}

SuperMutant::SuperMutant(SuperMutant const& src)
{
    *this = src;
    return ;
}

SuperMutant& SuperMutant::operator=(SuperMutant const& src)
{
    if(this != &src)
    {
        this->m_hp = src.m_hp;
        this->m_type = src.m_type;
    }
    return (*this);
}

void    SuperMutant::takeDamage(int amount)
{
    amount -= 3;
    if(amount > 0)
    {
        this->m_hp -= amount;
        if(this->m_hp < 0)
            this->m_hp = 0;
    }
    return ;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}