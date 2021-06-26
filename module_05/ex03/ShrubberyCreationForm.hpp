#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string m_target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& src);
    ShrubberyCreationForm(ShrubberyCreationForm const& src);
    virtual void action() const;
    virtual ~ShrubberyCreationForm();
};


#endif