#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void chooseAction(NinjaTrap& ninjaTrap1, NinjaTrap& ninjaTrap2)
{
    int index;

    index = (rand() + 1) % 5;
    if (index == 1)
    {
        ninjaTrap1.meleeAttack(ninjaTrap2.get_name());
        ninjaTrap2.takeDamage(ninjaTrap1.get_meleeAttackDamage());
    }
    else if (index == 2)
    {
        ninjaTrap1.rangedAttack(ninjaTrap2.get_name());
        ninjaTrap2.takeDamage(ninjaTrap1.get_rangedAttackDamage());
    }
    else if (index == 3)
    {
        std::cout << "*********** Ninja-TP " << ninjaTrap1.get_name() << " : \"Ha-HA!\" *********** " << std::endl;
        ninjaTrap1.ninjaShoebox(ninjaTrap2);
    }
    else if (index == 4)
        ninjaTrap1.beRepaired(25);
    std::cout << DEFAULT;
}

int main()
{
    NinjaTrap ninjaTrap1("Sejuani");
    NinjaTrap ninjaTrap2("Vayne");

    srand(time(0));
    while (ninjaTrap1.isAlive() && ninjaTrap2.isAlive())
    {
        int index = (rand() + 1) % 3;
        if (index == 1)
        {
            std::cout << PURPLE;
            chooseAction(ninjaTrap1, ninjaTrap2);
        }
        else
        {
            std::cout << BLUE;
            chooseAction(ninjaTrap2, ninjaTrap1);
        }
        sleep(1);
    }
    return (0);
}