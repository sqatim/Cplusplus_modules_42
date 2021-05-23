#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{

}

void HumanB::setWeapon(Weapon& weapon)
{
    m_weapon = &weapon;
}

void HumanB::attack() const
{
    if(!m_name.empty() && m_weapon != nullptr)
    std::cout << m_name << "attacks with his " << m_weapon->getType() << std::endl;
}
