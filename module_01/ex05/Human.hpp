#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp" 

class Human
{
    private:
    
        Brain const m_brain;
    public:
        std::string identify() const;
        Brain const& getBrain() const;
        /* this étant un pointeur sur un objet,*this est l'objet lui-même ! 
        Notre opérateur renvoie donc l'objet lui-même. */
};


#endif