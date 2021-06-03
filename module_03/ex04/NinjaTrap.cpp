#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("", 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "NinjaTrap::Default constructor called" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "NinjaTrap::String constructor called" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const& src)
{
    std::cout << "NinjaTrap::Copy constructor called" << std::endl;
    *this = src;
    return ;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& src)
{
    if(this != &src)
    {
        this->m_name = src.m_name;
		this->m_hitPoints = src.m_hitPoints;
		this->m_maxHitPoints = src.m_maxHitPoints;
		this->m_maxEnergyPoints = src.m_maxEnergyPoints;
		this->m_level = src.m_level;
		this->m_meleeAttackDamage = src.m_meleeAttackDamage;
		this->m_rangedAttackDamage = src.m_rangedAttackDamage;
		this->m_armorDamageReduction = src.m_armorDamageReduction;
    }
    return (*this);
}

void NinjaTrap::ninjaShoebox(FragTrap const& fragTrap)
{
	std::cout << "I'am a fragTrap and my name is : " << fragTrap.get_name() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const& scavTrap)
{
	std::cout << "I'am a ScavTrap and my name is : " << scavTrap.get_name() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const& ninjaTrap)
{
	std::cout << "I'am a NinjaTrap and my name is : " << ninjaTrap.m_name << std::endl;
}
NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap::Destructor called" << std::endl;
	return;	
}