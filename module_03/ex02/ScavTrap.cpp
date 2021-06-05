#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default", 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap::Default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap::String constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap::Copy constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
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

void	ScavTrap::focusChall()
{
	std::cout << "SC4V-TP " << this->m_name << " choose the Focus challenge " << std::endl;
	return ;
}

void	ScavTrap::mysticChall()
{
	std::cout << "SC4V-TP " << this->m_name << " choose the Mystic challenge " << std::endl;
}

void	ScavTrap::statueChall()
{
	std::cout << "SC4V-TP " << this->m_name << " choose the Statue challenge " << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	int index;
	void (ScavTrap::*ptr[3])(void) = {
		&ScavTrap::focusChall,
		&ScavTrap::mysticChall,
		&ScavTrap::statueChall
	};
	srand(time(0));
	index = rand() % 3;
	for(int i = 0; i < 3; i++)
	{
		if (i == index)
			(this->*ptr[index])();
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap::Destructor called" << std::endl;
	return;
}
