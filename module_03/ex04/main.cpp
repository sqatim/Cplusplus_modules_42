#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void chooseAction(ScavTrap& scavTrap1, ScavTrap& scavTrap2)
{
    int index;

    index = (rand() + 1) % 5;
    if (index == 1)
    {
        scavTrap1.meleeAttack(scavTrap2.get_name());
        scavTrap2.takeDamage(scavTrap1.get_meleeAttackDamage());
    }
    else if (index == 2)
    {
        scavTrap1.rangedAttack(scavTrap2.get_name());
        scavTrap2.takeDamage(scavTrap1.get_rangedAttackDamage());
    }
    else if (index == 3)
        scavTrap1.challengeNewcomer();
    else if (index == 4)
        scavTrap1.beRepaired(25);
    std::cout << DEFAULT;
}

int main()
{
    ScavTrap scavTrap("scavTrap1");
    FragTrap fragTrap("fragTrap1");
    NinjaTrap ninjaTrap("ninjaTrap1");

    std::cout << GREEN;
    ninjaTrap.ninjaShoebox(scavTrap);
    ninjaTrap.ninjaShoebox(fragTrap);
    ninjaTrap.ninjaShoebox(ninjaTrap);
    std::cout << DEFAULT;
    return (0);
}