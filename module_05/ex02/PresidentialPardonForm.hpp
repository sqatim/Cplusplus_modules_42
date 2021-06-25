#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string m_target;
    /* data */
public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(std::string target);
    virtual void execute(Bureaucrat const & executor) const;
    ~PresidentialPardonForm();
};


#endif