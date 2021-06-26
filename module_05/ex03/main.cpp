#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat sejuani("sejuani",46);
        RobotomyRequestForm form1("samir");
        sejuani.signForm(form1);
        form1.beSigned(sejuani);
        // sejuani.executeForm(form1);
        // form1.execute(sejuani);

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}