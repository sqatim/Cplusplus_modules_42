#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

class Character
{
private:
    Character();
    std::string m_name;
public:
    Character(std::string name);
    ~Character();
};

#endif