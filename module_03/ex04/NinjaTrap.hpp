#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	private:
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
    	NinjaTrap(int energyPoints, int maxEnergyPoints, int meleeAttackDamage);
		NinjaTrap(NinjaTrap const& src);
		NinjaTrap& operator=(NinjaTrap const& src);
		void ninjaShoebox(FragTrap& fragTrap);
		void ninjaShoebox(ScavTrap& scavTrap);
		void ninjaShoebox(NinjaTrap& ninjaTrap);
		~NinjaTrap();
};

#endif