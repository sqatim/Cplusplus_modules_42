#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	private:
		int m_hitPoints = 100;
		int m_maxHitPoints = 100;
		int m_maxEnergyPoints = 100;
		int m_level = 1;
		std::string m_name;
		int m_meleeAttackDamage = 30;
		int m_rangedAttackDamage = 20;
		int m_armorDamageReduction = 5;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& src);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		~FragTrap();
};

#endif