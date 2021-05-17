#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << '<' << m_name << " (" <<  m_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

// void Zombie::set_type(std::string type)
// {
//     this->m_type = type;
//     return;
// }

Zombie::Zombie(std::string name, std::string type) : m_name(name) ,  m_type(type)
{

}