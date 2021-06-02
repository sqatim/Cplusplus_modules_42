#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <unistd.h>
#include "ClapTrap.hpp"

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define BLUE "\033[38;5;21m"
#define DEFAULT "\033[0m"
#define PURPLE "\033[0;35m"


class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& src);
		ScavTrap& operator=(ScavTrap const& src);
		void			focusChall();
		void			mysticChall();
		void			statueChall();
		void			challengeNewcomer();
		~ScavTrap();
};

typedef void (ScavTrap::*challenge)();



#endif