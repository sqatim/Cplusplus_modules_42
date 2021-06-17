#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *  m_materia[4];
    int m_size;
public:
    MateriaSource(/* args */);
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};


#endif