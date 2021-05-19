#include "ZombieHorde.hpp"

void ZombieHorde::announce()
{
    for(int i = 0; i < m_n; i++)
    {
        srand(time(0));
        std::string str[] = {"vayne", "jhin", "jinx", "caitlyn", "yasuo", "velkoz"};
        int index = (rand() + i) % 6;
        std::string name = str[index];
        m_zombie->set_name(name);
        m_zombie->announce();
    }
}

ZombieHorde::ZombieHorde(int n) : m_n(n)
{
    m_zombie = new Zombie[n];
    announce();
}

ZombieHorde::~ZombieHorde()
{
    delete[] m_zombie;
}