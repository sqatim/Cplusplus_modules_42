#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap::Default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int maxHitPoints, \
			int energyPoints, int maxEnergyPoints, int level, \
			int meleeAttackDamage, int rangedAttackDamage, \
			int armorDamageReduction) :m_name(name), \
			m_hitPoints(hitPoints), m_maxHitPoints(maxHitPoints), m_energyPoints(energyPoints),\
			m_maxEnergyPoints(maxEnergyPoints), m_level(level), m_meleeAttackDamage(meleeAttackDamage), \
			m_rangedAttackDamage(rangedAttackDamage), m_armorDamageReduction(armorDamageReduction)
{
	std::cout << "ClapTrap::Constructor called" << std::endl;
    return;
}
ClapTrap::ClapTrap(ClapTrap const& src)
{
    std::cout << "ClapTrap::Copy constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& src)
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

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->m_name << " attacks " << target << " at range, causing "
			  << this->m_rangedAttackDamage << " points of damage !" << std::endl;
	return;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->m_name << " attacks " << target << " melee, causing "
			  << this->m_meleeAttackDamage << " points of damage !" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->m_hitPoints -= amount;
	std::cout << RED;
	if (this->m_hitPoints <= 0)
	{
		this->m_hitPoints = 0;
		std::cout << "*********** CL4P-TP " << this->m_name << " : \"I am dead, I am dead. Oh my god, I'm dead.\" *********** " << std::endl;
		std::cout << this->m_name << " is death" << std::endl;
		return ;
	}
	std::cout << this->m_name << " have " << this->m_hitPoints << " hp!" << std::endl;
	std::cout << DEFAULT;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN;
	if (this->m_hitPoints == this->m_maxHitPoints)
		std::cout << this->m_name << " cant Heal, Full Hp" << std::endl;
	else
	{
		this->m_hitPoints += amount;
		if (this->m_hitPoints > this->m_maxHitPoints)
			this->m_hitPoints = this->m_maxHitPoints;
		std::cout << this->m_name << " take a popo!" << std::endl;
		std::cout << this->m_name << "'s hitPoints is up to " << this->m_hitPoints << " hp" << std::endl;
	}
	std::cout << DEFAULT;
}

std::string ClapTrap::get_name() const
{
	return (this->m_name);
}

unsigned int ClapTrap::get_meleeAttackDamage() const
{
	return (this->m_meleeAttackDamage);
}

unsigned int ClapTrap::get_rangedAttackDamage() const
{
	return (this->m_rangedAttackDamage);
}

int ClapTrap::isAlive()
{
	if (this->m_hitPoints > 0)
		return (1);
	else
		return (0);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap::Destructor called" << std::endl;
	return;
}