#include "Enemy.hpp"

Enemy::Enemy()
{

    return ;
}

Enemy::Enemy(int hp, std::string const& type) : m_hp(hp), m_type(type)
{

    return ;
}

Enemy::Enemy(Enemy const& src)
{
    *this = src;
    return ;
}

Enemy& Enemy::operator=(Enemy const& src)
{
    if(this != &src)
    {
        this->m_hp = src.m_hp;
        this->m_type = src.m_type;
    }
    return (*this);
}

int Enemy::getHP() const
{
    return (this->m_hp);
}

// na9ass accesors dyal type;

void    Enemy::takeDamage(int amount)
{
    if(amount > 0)
    {
        this->m_hp -= amount;
        if(this->m_hp < 0)
            this->m_hp = 0;
    }
    return ;
}

Enemy::~Enemy()
{

    return ;
}