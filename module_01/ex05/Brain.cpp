#include "Brain.hpp"

std::string Brain::identify() const
{
    std::stringstream buffer;
    buffer << this;
    return (buffer.str());
}

Brain::Brain()
{
    
}