#include "FragTrap.hpp"

FragTrap::FragTrap() : m_name("Default"), m_hitPoints(100), m_maxHitPoints(100), m_energyPoints(100),m_maxEnergyPoints(100),
					   m_level(1), m_meleeAttackDamage(30), m_rangedAttackDamage(20), m_armorDamageReduction(5)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : m_name(name), m_hitPoints(100), m_maxHitPoints(100),
									   m_energyPoints(100), m_maxEnergyPoints(100), m_level(1), m_meleeAttackDamage(30), m_rangedAttackDamage(20), m_armorDamageReduction(5)
{
	std::cout << "String constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->m_name << " attacks " << target << " at range, causing "
			  << this->m_rangedAttackDamage << " points of damage !" << std::endl;
	return;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->m_name << " attacks " << target << " melee, causing "
			  << this->m_meleeAttackDamage << " points of damage !" << std::endl;
	return;
}

void FragTrap::takeDamage(unsigned int amount)
{
	this->m_hitPoints -= (amount - this->m_armorDamageReduction);
	std::cout << RED;
	if (this->m_hitPoints <= 0)
	{
		this->m_hitPoints = 0;
		std::cout << "FR4G-TP " << this->m_name << " is death" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->m_name << " have " << this->m_hitPoints << " hp!" << std::endl;
	std::cout << DEFAULT;
	return;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN;
	if (this->m_hitPoints == this->m_maxHitPoints)
		std::cout << "FR4G-TP " << this->m_name << " cant Heal, Full Hp" << std::endl;
	else
	{
		this->m_hitPoints += amount;
		if (this->m_hitPoints > this->m_maxHitPoints)
			this->m_hitPoints = this->m_maxHitPoints;
		std::cout << "FR4G-TP " << this->m_name << " take a popo!" << std::endl;
		std::cout << "FR4G-TP " << this->m_name << "'s hitPoints is up to " << this->m_hitPoints << " hp" << std::endl;
	}
	std::cout << DEFAULT;
}

std::string FragTrap::get_name() const
{
	return (this->m_name);
}

unsigned int FragTrap::get_meleeAttackDamage() const
{
	return (this->m_meleeAttackDamage);
}

unsigned int FragTrap::get_rangedAttackDamage() const
{
	return (this->m_rangedAttackDamage);
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int index;

	srand(time(0));
	index = rand() % 5;
	if (this->m_energyPoints < 25)
	{
		std::cout << "U dont have enough energy" << std::endl;
		return (0);
	}
	else if (index == 0)
	{
		std::cout << "FR4G-TP " << this->m_name << " attacks " << target\
		 << " with Poisoned Arrow, causing 33 points of damage !" << std::endl;
		return (33);
	}
	else if (index == 1)
	{
		std::cout << "FR4G-TP " << this->m_name << " attacks " << target\
		 << " with Destructive Arrow, causing 39 points of damage !" << std::endl;
		return (39);
	}
	else if (index == 2)
	{
		std::cout << "FR4G-TP " << this->m_name << " attacks " << target\
		 << " with Slaughtering Arrow, causing 35 points of damage !" << std::endl;
		return (35);
	}
	else if (index == 3)
	{
		std::cout << "FR4G-TP " << this->m_name << " attacks " << target\
		 << " with Punitive Arrow, causing 42 points of damage !" << std::endl;
		return (42);
	}
	else if (index == 4)
	{
		std::cout << "FR4G-TP " << this->m_name << " attacks " << target\
		 << " with Conniving Arrow, causing 44 points of damage !" << std::endl;
		return (44);
	}
	this->m_energyPoints -= 25;
	return (0);
}

int FragTrap::isAlive()
{
	if (this->m_hitPoints > 0)
		return (1);
	else
		return (0);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
	return;
}
