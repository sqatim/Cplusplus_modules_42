#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string m_name;
    Weapon *m_weapon;
public:
    void attack() const;
    // HumanB(/* args */);
    // ~HumanB();
};

#endif