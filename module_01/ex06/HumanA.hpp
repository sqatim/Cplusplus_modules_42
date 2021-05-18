#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string m_name;
    Weapon *m_weapon;
public:
    void attack() const;
    // HumanA(/* args */);
    // ~HumanA();
};

#endif