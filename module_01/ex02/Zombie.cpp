#include "Zombie.hpp"

void Zombie::announce()
{
    if (this != nullptr)
        std::cout << '<' << m_name << " (" << m_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

Zombie::Zombie() : m_name(""), m_type("")
{
}

Zombie::~Zombie()
{
}