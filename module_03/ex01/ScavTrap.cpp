#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : m_hitPoints(100), m_maxHitPoints(100), m_energyPoints(50),m_maxEnergyPoints(50),
					   m_level(1), m_meleeAttackDamage(20), m_rangedAttackDamage(15), m_armorDamageReduction(3)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : m_name(name), m_hitPoints(100), m_maxHitPoints(100),
									   m_energyPoints(50), m_maxEnergyPoints(50), m_level(1), m_meleeAttackDamage(20), m_rangedAttackDamage(15), m_armorDamageReduction(3)
{
	std::cout << "String constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
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
		this->m_maxEnergyPoints = src.m_maxEnergyPoints;
		this->m_level = src.m_level;
		this->m_meleeAttackDamage = src.m_meleeAttackDamage;
		this->m_rangedAttackDamage = src.m_rangedAttackDamage;
		this->m_armorDamageReduction = src.m_armorDamageReduction;
	}
	return (*this);
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->m_name << " attacks " << target << " at range, causing "
			  << this->m_rangedAttackDamage << " points of damage !" << std::endl;
	return;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->m_name << " attacks " << target << " melee, causing "
			  << this->m_meleeAttackDamage << " points of damage !" << std::endl;
	return;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->m_hitPoints -= (amount- this->m_armorDamageReduction);
	std::cout << RED;
	if (this->m_hitPoints < 0)
	{
		this->m_hitPoints = 0;
		std::cout << "SC4V-TP " << this->m_name << " is death" << std::endl;
		return ;
	}
	std::cout << "SC4V-TP " << this->m_name << " have " << this->m_hitPoints << " hp!" << std::endl;
	std::cout << DEFAULT;
	return;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN;
	if (this->m_hitPoints == this->m_maxHitPoints)
		std::cout << "SC4V-TP " << this->m_name << " cant Heal, Full Hp" << std::endl;
	else
	{
		this->m_hitPoints += amount;
		if (this->m_hitPoints > this->m_maxHitPoints)
			this->m_hitPoints = this->m_maxHitPoints;
		std::cout << "SC4V-TP " << this->m_name << " take a popo!" << std::endl;
		std::cout << "SC4V-TP " << this->m_name << "'s hitPoints is up to " << this->m_hitPoints << " hp" << std::endl;
	}
	std::cout << DEFAULT;
}

std::string ScavTrap::get_name() const
{
	return (this->m_name);
}

unsigned int ScavTrap::get_meleeAttackDamage() const
{
	return (this->m_meleeAttackDamage);
}

unsigned int ScavTrap::get_rangedAttackDamage() const
{
	return (this->m_rangedAttackDamage);
}

int ScavTrap::isAlive()
{
	if (this->m_hitPoints > 0)
		return (1);
	else
		return (0);
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
	challenge chall[3];
	int index;
	chall[0] = &ScavTrap::focusChall;
	// chall[0] = (&ScavTrap::focusChall());
	// chall[1] = this->mysticChall;
	// chall[2] = this->statueChall;
	srand(time(0));
	index = rand() % 4;
	if(index == 0)
		Schall[0]();
	// else if(index == 1)
	// 	chall[1]();
	// else if(index == 2)
	// 	chall[2]();
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
	return;
}
