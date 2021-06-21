#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string m_name;
    std::string m_title;
    Sorcerer();
public:
    //Constructors;
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const& src);
    
    // Operator Overload
    Sorcerer& operator=(Sorcerer const& src);

    // Other function;
    void  polymorph(Victim const &) const;

    // Accessors;
    std::string getName() const;
    std::string getTitle() const;
    ~Sorcerer();
};

std::ostream& operator<<(std::ostream& output,Sorcerer const& src);

#endif