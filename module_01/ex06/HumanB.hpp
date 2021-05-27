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
    void setWeapon(Weapon& weapon);
    HumanB(std::string name);
    ~HumanB();
};

#endif