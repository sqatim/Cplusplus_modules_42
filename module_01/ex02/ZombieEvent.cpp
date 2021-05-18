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
    srand(time(0));
    std::string str[] = {"vayne", "jhin", "jinx", "caitlyn", "yasuo", "velkoz"};
    int index = rand() % 6;
    std::string name = str[index];
    Zombie zombie(name, "Zombie");
    zombie.announce();
}