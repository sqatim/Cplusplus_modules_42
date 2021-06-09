#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& src)
{
    *this = src;
    return ;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const& src)
{
    if(this != &src)
    {
    }
    return ;
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::AssaultTerminator()
{
    std::cout << "I’ll be back..." << std::endl;
    return ;
}