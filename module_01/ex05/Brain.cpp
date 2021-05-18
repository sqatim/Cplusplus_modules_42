#include "Brain.hpp"

std::string Brain::identify() const
{
    std::stringstream buffer;
    buffer << this;
    std::string name = buffer.str();
    return (name);
}

Brain::Brain()
{
    
}