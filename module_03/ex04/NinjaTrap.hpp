#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	private:
		/* data */
	public:
		NinjaTrap(/* args */);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const& src);
		NinjaTrap& operator=(NinjaTrap const& src);
		void ninjaShoebox(FragTrap const& fragTrap);
		void ninjaShoebox(ScavTrap const& scavTrap);
		void ninjaShoebox(NinjaTrap const& ninjaTrap);
		~NinjaTrap();
};

#endif