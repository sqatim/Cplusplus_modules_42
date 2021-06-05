#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void chooseAction(SuperTrap& superTrap1, SuperTrap& superTrap2)
{
    int index;

    index = (rand() + 1) % 4;
    if (index == 1)
    {
        superTrap1.meleeAttack(superTrap2.get_name());
        superTrap2.takeDamage(superTrap1.get_meleeAttackDamage());
    }
    else if (index == 2)
    {
        superTrap1.rangedAttack(superTrap2.get_name());
        superTrap2.takeDamage(superTrap1.get_rangedAttackDamage());
    }
    else if (index == 3)
        superTrap1.beRepaired(25);
    std::cout << DEFAULT;
}

int main()
{
    SuperTrap superTrap1("Sejuani");
    SuperTrap superTrap2("Vayne");

    srand(time(0));
    while (superTrap1.isAlive() && superTrap2.isAlive())
    {
        int index = (rand() + 1) % 3;
        if (index == 1)
        {
            std::cout << PURPLE;
            chooseAction(superTrap1, superTrap2);
        }
        else
        {
            std::cout << BLUE;
            chooseAction(superTrap2, superTrap1);
        }
        sleep(1);
    }
    return (0);
}