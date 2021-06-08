#include "Character.hpp"

Character::Character()
{

    return ;
}

Character::Character(std::string const& name) : m_name(name), m_ap(40), m_weapon(nullptr)
{

    return ;
}

Character::Character(Character const& src)
{
    *this = src;
    return ;
}

Character& Character::operator=(Character const& src)
{
    if(this != &src)
    {
        this->m_name = src.m_name;
        this->m_ap = src.m_ap;
        this->m_weapon = src.m_weapon;
    }
    return (*this);
}

void Character::attack(Enemy *enemy)
{
    if(enemy != nullptr)
    {
        std::cout << this->m_name << " has " << this->m_ap << " AP and wields a " \
            << this->m_weapon->getName() << std::endl;
        if(this->m_ap - this->m_weapon->getAPCost() >= 0)
        {
            this->m_weapon->attack();
            enemy->takeDamage(this->m_weapon->getDamage());
            this->m_ap -= this->m_weapon->getAPCost();
        }
    }
    else
            std::cout << this->m_name << " has " << this->m_ap << " AP and is unarmed" << std::endl;
}

Character::~Character()
{

    return ;
}