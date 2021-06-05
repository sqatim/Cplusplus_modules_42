#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "FragTrap::Default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "FragTrap::String constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap::Copy constructor called" << std::endl;
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



unsigned int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int index;

	srand(time(0));
	index = rand() % 5;
	if (this->m_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << this->m_name << "dont have enough energy" << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap::Destructor called" << std::endl;
	return;
}
