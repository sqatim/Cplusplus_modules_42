#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string const m_name;
    unsigned int m_grade;
public:
    class Error : public std::exception
    {
        public:
        virtual const char *what() const throw();
    };
    Bureaucrat(/* args */);
    std::string getName() const;
    unsigned int getGrade() const;
    void incrementation();
    void décrémentation();
    void GradeTooHighException() const;
    void GradeTooLowException() const; 
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& output, Bureaucrat const& bureaucrat);

#endif