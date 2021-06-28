#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const m_name;
    bool m_signe;
    int const m_gradeSign;
    int const m_gradeExecute;
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
        public:
        virtual const char* what() const throw();
    };
    Form(Form const& src);
    Form& operator=(Form const& src);
    void beSigned(Bureaucrat bureaucrat);
    bool getSigne() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    std::string printSign() const;
    std::string const getName() const;
    ~Form();
};

std::ostream& operator<<(std::ostream& output, Form const& form);

#endif