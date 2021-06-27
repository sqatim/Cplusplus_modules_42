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

Bureaucrat::Bureaucrat(Bureaucrat const& src) : m_name(src.m_name)
{
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& src)
{
    if (this != &src)
        this->m_grade = src.m_grade;
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
    return "Bureaucrat::Grade to hight!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat::Grade to low!";
}

void Bureaucrat::signForm(Form form)
{
    if (form.getSigne() == true)
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    else
    {
        Bureaucrat::GradeTooLowException reason;
        std::cout << this->getName() << " cant sign " << form.getName() << " because " << reason.what() << std::endl;
    }

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