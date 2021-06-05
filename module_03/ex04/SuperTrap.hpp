#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap
{
private:
public:
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap& operator=(SuperTrap const& src);
    SuperTrap(SuperTrap const& src);
    void initialisation();

    ~SuperTrap();
};

#endif