#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string m_type;

    public:
        Zombie *newZombie(std::string name);
        void randomChump();
        void setZombieType(std::string name);
};



#endif