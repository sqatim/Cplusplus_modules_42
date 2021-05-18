#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string m_type;
        std::string m_name;

    public:
        Zombie();
        Zombie(std::string name, std::string type);
        void    announce();
        void    set_name(std::string name);
};


#endif