#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string m_target;
    /* data */
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    virtual void execute(Bureaucrat const & executor) const;
    ~RobotomyRequestForm();
};

#endif