#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute) : m_name(name), m_gradeSign(gradeSign), m_gradeExecute(gradeExecute), m_signe(false)
{
    if (gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    else if (gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
    return;
}

void Form::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() < this->m_gradeSign)
        this->m_signe = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form::Grade to hight!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form::Grade to low!";
}

const char* Form::InSignedException::what() const throw()
{
    return "Insigned Form!";
}

std::string Form::printSign() const
{
    if (this->getSigne() == true)
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

void Form::execute(Bureaucrat const &executor) const
{
    if (!this->m_signe)
        throw InSignedException();
    if (executor.getGrade() > this->m_gradeExecute)
        throw Bureaucrat::GradeTooLowException();
    action();
}

Form::~Form()
{
    return;
}

std::ostream &operator<<(std::ostream &output, Form const &form)
{
    output << "{\n    Form \"" << form.getName() << "\" :\n        gradeSign: " << form.getGradeSign() << ".\n        gradeExecute: " << form.getGradeExecute() << ".\n        sign: " << form.printSign() << "\e[39m.\n}" << std::endl;
    return (output);
}