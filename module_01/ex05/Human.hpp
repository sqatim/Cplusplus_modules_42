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
};


#endif