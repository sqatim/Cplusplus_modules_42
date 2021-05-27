#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "String constructor called" << std::endl;
    this->m_name = name;
    return ;
}

FragTrap::FragTrap(FragTrap const& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

void FragTrap::rangedAttack(std::string const& target)
{
    std::cout << "FR4G-TP " << this->m_name << " attacks " << target << " at range, causing " \
        << this->m_rangedAttackDamage<< " points of damage !" << std::endl;
    return ;
}

void FragTrap::meleeAttack(std::string const& target)
{
    std::cout << "FR4G-TP " << this->m_name << " attacks " << target << " melee, causing " \
        << this->m_meleeAttackDamage<< " points of damage !" << std::endl;

    return ;
}

void FragTrap::takeDamage(unsigned int amount)
{
    this->m_hitPoints -= amount;
    if (this->m_hitPoints < 0)
        this->m_hitPoints = 0;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}
