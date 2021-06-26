#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string m_target;
    /* data */
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const& src);
    RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
    virtual void action() const;
    virtual ~RobotomyRequestForm();
};

#endif