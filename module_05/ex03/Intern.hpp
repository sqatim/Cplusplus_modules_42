#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern
{
private:
    /* data */
public:
    class ErreurExecption : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
    
    Intern();
    Intern(Intern const& src);
    Intern& operator=(Intern const& src);
    Form* makeForm(std::string formName, std::string formTarget);
    ~Intern();
};

#endif