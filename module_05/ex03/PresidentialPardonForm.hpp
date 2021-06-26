#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string m_target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const& src);
    PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
    virtual void action() const;
    virtual ~PresidentialPardonForm();
};


#endif