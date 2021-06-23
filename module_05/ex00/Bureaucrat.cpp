#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

    return ;
}

void Bureaucrat::incrementation()
{
    if(this->m_grade > 1)
        this->m_grade--;
    else
        throw /* [...] */;
}
void Bureaucrat::décrémentation()
{
    if(this->m_grade < 150)
        this->m_grade++;
    else
        throw /* [...] */;
}

void Bureaucrat::GradeTooLowException() const
{
    std::cerr << "Grade to low!" << std::endl;
} 

void Bureaucrat::GradeTooHighException() const
{
    std::cerr << "Grade To hight!" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->m_name);
}

unsigned int Bureaucrat::getGrade() const
{
    return (this->m_grade);
}

const char (Bureaucrat::*Error::what)() const throw()
{

}

Bureaucrat::~Bureaucrat()
{

    return ;
}


std::ostream& operator<<(std::ostream& output, Bureaucrat const& bureaucrat)
{
    output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (output);
}