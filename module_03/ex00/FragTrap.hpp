#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	private:
		std::string m_name;
		int m_hitPoints;
		int m_maxHitPoints;
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
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const& target);
		~FragTrap();
};

#endif