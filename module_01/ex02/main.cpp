#include <iostream>
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent zombieEvent;
    Zombie *zombie = nullptr;
    zombieEvent.setZombieType("default");
    zombie = zombieEvent.newZombie("samir");
    zombie->announce();
    zombieEvent.randomChump();
    delete zombie;
    return (0);
}