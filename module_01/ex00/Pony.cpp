#include "Pony.hpp"

Pony::Pony(std::string message) : m_message(message)
{
    std::cout << m_message << std::endl;
}

Pony::~Pony()
{
}