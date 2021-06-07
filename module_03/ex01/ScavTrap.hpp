#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <unistd.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define BLUE "\033[38;5;21m"
#define DEFAULT "\033[0m"
#define PURPLE "\033[0;35m"


class ScavTrap
{
	private:
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
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& src);
		ScavTrap& operator=(ScavTrap const& src);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				isAlive();
		void			focusChall();
		void			mysticChall();
		void			statueChall();
		void			challengeNewcomer();

		//	accesors
		std::string get_name() const;
		unsigned int 	get_meleeAttackDamage() const;
		unsigned int 	get_rangedAttackDamage() const;
		~ScavTrap();
};

#endif