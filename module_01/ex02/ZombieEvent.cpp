#include "ZombieEvent.hpp"

Zombie* ZombieEvent::newZombie(std::string name)
{
    return new Zombie(name, m_type); 
}

void ZombieEvent::setZombieType(std::string type)
{
    m_type = type;
    return ;
}

void ZombieEvent::randomChump()
{
    Zombie zombie("", "Zombie");
}