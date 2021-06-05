#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() 
{
	this->m_name = "Default";
	this->m_hitPoints = 60;
	this->m_maxHitPoints = 60;
	this->m_energyPoints = 120;
	this->m_maxEnergyPoints = 120;
	this->m_level = 1;
	this->m_meleeAttackDamage = 60;
	this->m_rangedAttackDamage = 5;
	this->m_armorDamageReduction = 0;
	std::cout << "NinjaTrap1::Default constructor called" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "NinjaTrap::String constructor called" << std::endl;
	this->m_name = name;
	this->m_hitPoints = 60;
	this->m_maxHitPoints = 60;
	this->m_energyPoints = 120;
	this->m_maxEnergyPoints = 120;
	this->m_level = 1;
	this->m_meleeAttackDamage = 60;
	this->m_rangedAttackDamage = 5;
	this->m_armorDamageReduction = 0;
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
		this->m_energyPoints = src.m_energyPoints;
		this->m_maxEnergyPoints = src.m_maxEnergyPoints;
		this->m_level = src.m_level;
		this->m_meleeAttackDamage = src.m_meleeAttackDamage;
		this->m_rangedAttackDamage = src.m_rangedAttackDamage;
		this->m_armorDamageReduction = src.m_armorDamageReduction;
    }
    return (*this);
}

void NinjaTrap::ninjaShoebox(FragTrap& fragTrap)
{
	std::cout << this->m_name << " attacks " << fragTrap.get_name() << " with ultimate, causing 70"
		 << " points of damage !" << std::endl;
	fragTrap.takeDamage(70);
}

void NinjaTrap::ninjaShoebox(ScavTrap& scavTrap)
{
	std::cout << this->m_name << " attacks " << scavTrap.get_name() << " with ultimate, causing 70"
		 << " points of damage !" << std::endl;
	scavTrap.takeDamage(70);
}

void NinjaTrap::ninjaShoebox(NinjaTrap& ninjaTrap)
{
	std::cout << this->m_name << " attacks " << ninjaTrap.get_name() << " with ultimate, causing 70"
		 << " points of damage !" << std::endl;
	ninjaTrap.takeDamage(70);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap::Destructor called" << std::endl;
	return;	
}