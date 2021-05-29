#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <unistd.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define BLUE "\033[38;5;21m"
#define DEFAULT "\033[0m"
#define PURPLE "\033[0;35m"



class FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& src);
		FragTrap& operator=(FragTrap const& src);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	vaulthunter_dot_exe(std::string const& target);
		int				isAlive();
		//	accesors
		std::string get_name() const;
		unsigned int 	get_meleeAttackDamage() const;
		unsigned int 	get_rangedAttackDamage() const;
		~FragTrap();
};

#endif