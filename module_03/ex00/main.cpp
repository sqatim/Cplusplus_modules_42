#include "FragTrap.hpp"

void chooseAction(FragTrap &fragTrap1, FragTrap &fragTrap2)
{
    int index;
    int damage;

    index = (rand() + 1) % 5;
    if (index == 1)
    {
        fragTrap1.meleeAttack(fragTrap2.get_name());
        fragTrap2.takeDamage(fragTrap1.get_meleeAttackDamage());
    }
    else if (index == 2)
    {
        fragTrap1.rangedAttack(fragTrap2.get_name());
        fragTrap2.takeDamage(fragTrap1.get_rangedAttackDamage());
    }
    else if (index == 3)
    {
        damage = fragTrap1.vaulthunter_dot_exe(fragTrap2.get_name());
        std::cout << "*********** FR4G-TP " << fragTrap1.get_name() << " : \"Ha-HA!\" *********** " << std::endl;
        if (damage != 0)
            fragTrap2.takeDamage(damage);
    }
    else if (index == 4)
    {
        fragTrap1.beRepaired(25);
    }
    std::cout << DEFAULT;
}

int main()
{
    FragTrap fragTrap1("Sejuani");
    FragTrap fragTrap2("Vayne");

    srand(time(0));
    while (fragTrap1.isAlive() && fragTrap2.isAlive())
    {
        int index = (rand() + 1) % 3;
        if (index == 1)
        {
            std::cout << PURPLE;
            chooseAction(fragTrap1, fragTrap2);
        }
        else
        {
            std::cout << BLUE;
            chooseAction(fragTrap2, fragTrap1);     
        }
        sleep(1);
    }
    return (0);
}