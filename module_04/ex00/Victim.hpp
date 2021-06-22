#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
class Victim
{
protected:
    std::string m_name;
public:
    // constructor
    Victim();
    Victim(std::string name);
    Victim(Victim const& src);

    // Operator Overload
    Victim& operator=(Victim const& src);

    // Other function
    virtual void getPolymorphed() const;

    //  accessors
    std::string getName() const;

    virtual ~Victim();
};

std::ostream& operator<<(std::ostream& output , Victim const& src);

#endif