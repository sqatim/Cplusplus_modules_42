#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"


class Intern
{
private:
    /* data */
public:
    Intern();
    Intern(Intern const& src);
    Intern& operator=(Intern const& src);
    Form* makeForm(std::string formName, std::string formTarget);
    ~Intern();
};

#endif