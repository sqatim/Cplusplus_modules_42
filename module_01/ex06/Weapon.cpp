#include "Weapon.hpp"

std::string const& Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string str)
{
    this->type = str;
    return ;
}

Weapon::Weapon(std::string str) : type(str)
{

}