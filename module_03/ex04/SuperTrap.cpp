#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
    std::cout << "SuperTrap::Default constructor called" << std::endl;
    this->m_name = "Default";
    this->initialisation();
}

SuperTrap::SuperTrap(SuperTrap const& src)
{
    std::cout << "SuperTrap::Copy constructor called" << std::endl;
    *this = src;
    return ;
}

SuperTrap& SuperTrap::operator=(SuperTrap const& src)
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

SuperTrap::SuperTrap(std::string str) : ClapTrap(str), FragTrap(str) , NinjaTrap(str)
{
    std::cout << "SuperTrap::String constructor called" << std::endl;
    this->initialisation();
}

void SuperTrap::initialisation()
{
    this->m_hitPoints = 100;
    this->m_maxHitPoints = 100;
    this->m_energyPoints = 120;
    this->m_maxEnergyPoints = 120;
    this->m_rangedAttackDamage = 20;
    this->m_armorDamageReduction = 5;
    this->m_meleeAttackDamage = 60;
}

SuperTrap::~SuperTrap()
{
        std::cout << "SuperTrap::Destructor called" << std::endl;
}