#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap
{
private:
    /* data */
public:
    SuperTrap(/* args */);
    SuperTrap(std::string name);

    ~SuperTrap();
};

#endif