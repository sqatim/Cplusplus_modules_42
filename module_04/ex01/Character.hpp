#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string m_name;
    int m_ap;
    AWeapon *m_weapon;
public:
    //  Constructors;
    Character();
    Character(std::string const & name);
    Character(Character const& src);
   // [...]
    //  Operators Overload;
    Character& operator=(Character const& src);

    //  Other Functions
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);

    //  Accessors;
    std::string const getName() const;
    int getAp() const;
    std::string getWeaponName() const;
    void* getAddWeapon() const;
    ~Character();
};

std::ostream& operator<<(std::ostream& output, Character const& src);

#endif