#include "Character.hpp"
#include "AMateria.hpp"
// #include "Cure.hpp"

Character::Character(std::string const &name) : m_name(name), m_size(0)
{
}

Character::Character(Character const &character)
{
    *this = character;
    return;
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
        // khasni nshufti hadshi man ba3d
        this->m_materia[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if(this->m_size > 0 && idx >= 0 && idx < this->m_size)
    {
    // std::cout << "lalalalalala" << std::endl;
        this->m_materia[idx]->use(target);
    }
}


Character::~Character()
{

    return;
}