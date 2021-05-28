#include "FragTrap.hpp"

FragTrap::FragTrap() : m_hitPoints(100) , m_maxHitPoints(100), m_maxEnergyPoints(100), \
		m_level(1), m_meleeAttackDamage(30), m_rangedAttackDamage(20), m_armorDamageReduction(5)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : m_name(name), m_hitPoints(100) , m_maxHitPoints(100), \
	m_maxEnergyPoints(100),	m_level(1), m_meleeAttackDamage(30), m_rangedAttackDamage(20), m_armorDamageReduction(5)
{
	std::cout << "String constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const& src)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	if(this->m_hitPoints == this->m_maxHitPoints)
	{
		std::cout << "You are Full hp, U cant heal!" << std::endl;
	}
	else
	{
		this->m_hitPoints += amount;
		if(this->m_hitPoints > this->m_maxHitPoints)
			this->m_hitPoints = this->m_maxHitPoints;
		std::cout << "Now, u have " << this->m_hitPoints << " hp" << std::endl;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
