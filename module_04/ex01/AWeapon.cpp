#include "AWeapon.hpp"

AWeapon::AWeapon()
{
    
    return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : m_name(name), m_apCost(apcost), m_damage(damage)
{
    
    return ;
}

AWeapon::AWeapon(AWeapon const& src)
{
    *this = src;
    return ;
}

AWeapon& AWeapon::operator=(AWeapon const& src)
{
    if(this != &src)
    {
        this->m_name = src.m_name;
        this->m_apCost = src.m_apCost;
        this->m_damage = src.m_damage;
    }
    return (*this);
}

std::string const AWeapon::getName() const
{
    return (this->m_name);
}

int AWeapon::getAPCost() const
{
    return (this->m_apCost);
}

int AWeapon::getDamage() const
{
    return (this->m_damage);
}

AWeapon::~AWeapon()
{
    
    return ;
}