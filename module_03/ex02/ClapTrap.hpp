#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define BLUE "\033[38;5;21m"
#define DEFAULT "\033[0m"
#define PURPLE "\033[0;35m"

class ClapTrap
{
protected:
	std::string m_name;
	int m_hitPoints;
	int m_maxHitPoints;
	int m_energyPoints;
	int m_maxEnergyPoints;
	int m_level;
	int m_meleeAttackDamage;
	int m_rangedAttackDamage;
	int m_armorDamageReduction;

public:
    ClapTrap();
    ClapTrap(std::string name, int hitPoints, int maxHitPoints,	\
			int energyPoints, int maxEnergyPoints, int level, \
			int meleeAttackDamage, int rangedAttackDamage, \
			int armorDamageReduction);
    ClapTrap(ClapTrap const& src);
    ClapTrap& operator=(ClapTrap const& src);
    ~ClapTrap();
    void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	int				isAlive();
    // accesors
	std::string get_name() const;
    unsigned int 	get_meleeAttackDamage() const;
	unsigned int 	get_rangedAttackDamage() const;
};

#endif