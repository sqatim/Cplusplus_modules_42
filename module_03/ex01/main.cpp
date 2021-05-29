#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap1("Sejuani");
    FragTrap fragTrap2("Vayne");
    int damage;

    srand(time(0));
    while(fragTrap1.isAlive() && fragTrap2.isAlive())
    {
        int index = (rand() + 1) % 3;
        std::cout << PURPLE;
        if(index == 1)
        {
            index = (rand() + 1) % 5;
            if(index == 1)
            {
                fragTrap1.meleeAttack(fragTrap2.get_name());
                fragTrap2.takeDamage(fragTrap1.get_meleeAttackDamage());
            }
            else if(index == 2)
            {
                fragTrap1.rangedAttack(fragTrap2.get_name());
                fragTrap2.takeDamage(fragTrap1.get_rangedAttackDamage());
            }
            else if(index == 3)
            {
                damage = fragTrap1.vaulthunter_dot_exe(fragTrap2.get_name());
                if(damage != 0)
                    fragTrap2.takeDamage(damage);
            }
            else if(index == 4)
            {
                fragTrap1.beRepaired(25);
            }
            std::cout << DEFAULT;
        }
        else
        {
            std::cout << BLUE;
            index = (rand() + 1) % 5;
            if(index == 1)
            {
                fragTrap2.meleeAttack(fragTrap1.get_name());
                fragTrap1.takeDamage(fragTrap2.get_meleeAttackDamage());
            }
            else if(index == 2)
            {
                fragTrap2.rangedAttack(fragTrap1.get_name());
                fragTrap1.takeDamage(fragTrap2.get_rangedAttackDamage());
            }
            else if(index == 3)
            {
                damage = fragTrap2.vaulthunter_dot_exe(fragTrap1.get_name());
                if(damage != 0)
                    fragTrap1.takeDamage(damage);
            }
            else if(index == 4)
            {
                fragTrap2.beRepaired(25);
            }
            std::cout << DEFAULT;
        }
        sleep(1);
    }
    // if(!fragTrap1.isAlive())
    //     std::cout << fragTrap1.get_name() << "is died" << std::endl;
    // else if(!fragTrap2.isAlive())
    //     std::cout << fragTrap2.get_name() << " is died" << std::endl;
    // fragTra
    return (0);
}