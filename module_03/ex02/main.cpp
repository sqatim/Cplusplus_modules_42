#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
    {
        std::cout << "*********** SC4V-TP " << scavTrap1.get_name() << " : \"Ha-HA!\" *********** " << std::endl;
        scavTrap1.challengeNewcomer();
    }
    else if (index == 4)
        scavTrap1.beRepaired(25);
    std::cout << DEFAULT;
}

int main()
{
    ScavTrap scavTrap1("Sejuani");
    ScavTrap scavTrap2("Vayne");

    srand(time(0));
    while (scavTrap1.isAlive() && scavTrap2.isAlive())
    {
        int index = (rand() + 1) % 3;
        if (index == 1)
        {
            std::cout << PURPLE;
            chooseAction(scavTrap1, scavTrap2);
        }
        else
        {
            std::cout << BLUE;
            chooseAction(scavTrap2, scavTrap1);
        }
        sleep(1);
    }
    return (0);
}