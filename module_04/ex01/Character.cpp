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

void Character::equip(AWeapon *weapon)
{
    this->m_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if(this->m_weapon != nullptr)
    {
        std::cout << this->m_name << " attacks " << enemy->getType() << " with a " \
            << this->m_weapon->getName() << std::endl;
        if(this->m_ap - this->m_weapon->getAPCost() >= 0)
        {
            this->m_weapon->attack();
            enemy->takeDamage(this->m_weapon->getDamage());
            if(enemy->getHP() == 0)
            {
                delete enemy;
                enemy = nullptr;
            }
            this->m_ap -= this->m_weapon->getAPCost();
        }
    }
}

std::string const Character::getName() const
{
    return (this->m_name);
}

int Character::getAp() const
{
    return (this->m_ap);
}

std::string Character::getWeaponName() const
{
    return (this->m_weapon->getName());
}

void*  Character::getAddWeapon() const
{
    return ((void *)this->m_weapon);
}

Character::~Character()
{

    return ;
}

std::ostream& operator<<(std::ostream& output, Character const& src)
{
    if(src.getAddWeapon() != nullptr)
    {
        output << src.getName() << " has " << src.getAp() << " AP and wields a " \
            << src.getWeaponName() << std::endl;
    }
    else
        output << src.getName() << " has " << src.getAp() << " AP and is unarmed" << std::endl;
    return (output);
}