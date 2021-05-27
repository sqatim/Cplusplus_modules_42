#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << '<' << m_name << " (" <<  m_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->m_name = name;
    return;
}

Zombie::Zombie(std::string name, std::string type) : m_name(name) ,  m_type(type)
{

}

Zombie::Zombie(): m_type("default")
{

}

Zombie::~Zombie()
{

}