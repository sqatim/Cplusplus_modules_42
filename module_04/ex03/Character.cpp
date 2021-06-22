#include "Character.hpp"
#include "AMateria.hpp"


Character::Character(std::string const &name) : m_name(name), m_size(0)
{
    for(int i = 0; i < 4; i++)
        this->m_materia[i] = nullptr;
    return;
}

Character::Character(Character const &character)
{
    *this = character;
    return ;
}

Character &Character::operator=(Character const &character)
{
    if (this != &character)
    {
        this->m_name = character.m_name;
        for (int i = 0; i < character.m_size; i++)
            this->m_materia[0][i] = character.m_materia[0][i];
        this->m_size = character.m_size;
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->m_name);
}

void Character::equip(AMateria *m)
{
    if (this->m_size < 4)
    {
        this->m_materia[this->m_size] = m;
        this->m_size++;
    }
}

void Character::unequip(int idx)
{
    if(this->m_size > 0 && idx >= 0 && idx < this->m_size)
    {
        this->m_materia[idx] = nullptr;
        int i = idx + 1;
        for(; this->m_materia[i] != nullptr && i < this->m_size; i++)
            this->m_materia[idx] = this->m_materia[i];
        this->m_materia[i] = nullptr;
        this->m_size--;
    }
    return ;
}

void Character::use(int idx, ICharacter &target)
{
    if(this->m_materia[0] != nullptr)
    {
        if(this->m_size > 0 && idx >= 0 && idx < this->m_size)
            this->m_materia[idx]->use(target);
    }
    return ;
}

Character::~Character()
{
    return;
}