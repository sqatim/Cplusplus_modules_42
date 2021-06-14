#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const& src)
{
    *this = src;
    return ;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const& src)
{
    if(this != &src)
    {
        *this = src;
    }
    return *this;
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
    return ;
}

ISpaceMarine* TacticalMarine::clone() const
{
    TacticalMarine *tmp = new TacticalMarine(*this);
    return (tmp);
}