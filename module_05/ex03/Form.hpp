#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const m_name;
    int const m_gradeSign;
    int const m_gradeExecute;
    bool m_signe;
    Form();
public:
    Form(std::string name, int gradeSign, int gradeExecute);
    class GradeTooHighException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw();
    };
    class InSignedException : public std::exception
    {
        virtual const char* what() const throw();
    };
    void beSigned(Bureaucrat bureaucrat);
    bool getSigne() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    std::string printSign() const;
    std::string const getName() const;
    void execute(Bureaucrat const & executor) const;
    virtual void action() const = 0;

    virtual ~Form();
};

std::ostream& operator<<(std::ostream& output, Form const& form);

#endif