#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("Default"), m_grade(0)
{
    return ;
}

Bureaucrat::Bureaucrat(std::string name) : m_name(name), m_grade(0)
{
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& src)
{
    if (this != &src)
    {
        // hta nt2akad name;
        this->m_grade = src.m_grade;
    }
    return *this;
}

void Bureaucrat::incrementation()
{
    if(this->m_grade > 1)
        this->m_grade--;
    else
        throw GradeTooHighException();
}
void Bureaucrat::décrémentation()
{
    if(this->m_grade < 150)
        this->m_grade++;
    else
        throw GradeTooLowException();
}


std::string Bureaucrat::getName() const
{
    return (this->m_name);
}

unsigned int Bureaucrat::getGrade() const
{
    return (this->m_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade to hight!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade to low!";
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