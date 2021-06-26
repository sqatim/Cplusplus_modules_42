#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 5, 5), m_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : Form("PresidentialPardon", 5, 5), m_target(src.m_target)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& src)
{
    if (this != &src)
    {
        this->m_target = src.m_target;
    }
    return (*this);
}

void PresidentialPardonForm::action() const
{
    std::cout << this->m_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}