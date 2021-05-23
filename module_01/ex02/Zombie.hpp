#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string m_name;
        std::string m_type;

    public:

        Zombie();
        Zombie(std::string name, std::string type);
        void    announce();
        // void    set_type(std::string type);
};


#endif