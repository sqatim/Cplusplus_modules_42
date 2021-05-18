#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:

    Zombie *m_zombie;
    int m_n;

public:
    ZombieHorde(int n);
    void announce();
    ~ZombieHorde();
};

#endif