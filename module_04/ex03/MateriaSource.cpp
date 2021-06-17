#include "MateriaSource.hpp"


// MateriaSource::MateriaSource()
// {
//     this->m_materia = new AMateria[4];
// }

void MateriaSource::learnMateria(AMateria* materia)
{
    if(this->m_size < 4)
        this->m_materia[m_size++] = materia->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = m_size - 1; i <= 0; i--)
    {
        if((*this->m_materia)[i].getType() == type)
            return this->m_materia[i]->clone();
    }
    return 0;
}