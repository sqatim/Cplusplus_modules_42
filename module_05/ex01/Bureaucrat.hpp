#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string const m_name;
    unsigned int m_grade;
public:
    class GradeTooHighException : public std::exception
    {
        public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char *what() const throw();
    };
    Bureaucrat(/* args */);
    Bureaucrat(std::string name);
    Bureaucrat(Bureaucrat const& src);
    Bureaucrat& operator=(Bureaucrat const& src);
    std::string getName() const;
    unsigned int getGrade() const;
    void incrementation();
    void décrémentation();
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& output, Bureaucrat const& bureaucrat);

#endif