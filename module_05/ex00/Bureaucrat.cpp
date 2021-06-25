#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    else
        m_grade = grade;
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

int Bureaucrat::getGrade() const
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