#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : m_size(0)
{
    for (int i = 0; i < 4; i++)
        this->m_materia[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (this->m_size < 4)
    {
        this->m_materia[this->m_size] = materia->clone();
        this->m_size++;
    }
}

AMateria *MateriaSource::getAMateria() const
{
    return (this->m_materia[1]);
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = m_size - 1; i >= 0; i--)
    {
        if (this->m_materia[i]->getType() == type)
        {
            return this->m_materia[i]->clone();
        }
    }
    return 0;
}

MateriaSource::~MateriaSource()
{
    // this->m_materia = new AMateria[4];
}