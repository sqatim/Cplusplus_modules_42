#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string const m_name;
    int m_grade;
    Bureaucrat(/* args */);
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
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const& src);
    Bureaucrat& operator=(Bureaucrat const& src);
    std::string getName() const;
    int getGrade() const;
    void incrementation();
    void décrémentation();
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& output, Bureaucrat const& bureaucrat);

#endif