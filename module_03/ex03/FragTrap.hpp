#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <unistd.h>
#include "ClapTrap.hpp"

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define BLUE "\033[38;5;21m"
#define DEFAULT "\033[0m"
#define PURPLE "\033[0;35m"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& src);
		FragTrap& operator=(FragTrap const& src);
		unsigned int	vaulthunter_dot_exe(std::string const& target);
		int				isAlive();
		~FragTrap();
};

#endif