#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute) : m_name(name),m_signe(false), m_gradeSign(gradeSign), m_gradeExecute(gradeExecute)
{
    if (gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    else if(gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
    return ;
}

void Form::beSigned(Bureaucrat bureaucrat)
{
    if(bureaucrat.getGrade() <= this->m_gradeSign)
        this->m_signe = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form::Grade to hight!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form::Grade to low!";
}

std::string Form::printSign() const
{
    if(this->getSigne() == true)
        return "\e[38;5;2mTrue";
    else
        return "\e[38;5;9mFalse";
}

bool Form::getSigne() const
{
    return (this->m_signe);
}

std::string const Form::getName() const
{
    return (this->m_name);
}

int Form::getGradeSign() const
{
    return (this->m_gradeSign);
}

int Form::getGradeExecute() const
{
    return (this->m_gradeExecute);
}

Form::Form(Form const& src) : m_name(src.m_name), m_gradeSign(src.m_gradeSign), m_gradeExecute(src.m_gradeExecute)// khasni n9adha man ba3d3
{
    *this = src;
    return ;
}

Form& Form::operator=(Form const& src)
{
    if (this != &src)
    {
        this->m_signe = src.m_signe;
    }
    return (*this);
}

Form::~Form()
{
    return;
}

std::ostream& operator<<(std::ostream& output, Form const& form)
{
    output << "{\n    Form \"" << form.getName() << "\" :\n        gradeSign: " << \
        form.getGradeSign() << ".\n        gradeExecute: " << form.getGradeExecute() << \
        ".\n        sign: " << form.printSign() << "\e[39m.\n}" << std::endl;
    return (output);
}