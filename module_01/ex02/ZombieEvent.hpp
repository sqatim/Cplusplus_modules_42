#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    private:


    public:
    
    Zombie *newZombie(std::string name);
    std::string setZombieType(std::string name, Zombie& zombie);
};



#endif