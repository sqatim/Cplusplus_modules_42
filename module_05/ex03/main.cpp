#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat sejuani("sejuani",45);
        Intern inter;
        Form *form1 = inter.makeForm("robotomy request", "farwila");
        form1->beSigned(sejuani);
        sejuani.signForm(*form1);
        std::cout << *form1;
        form1->execute(sejuani);

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}