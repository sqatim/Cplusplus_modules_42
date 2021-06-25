#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat sejuani("sejuani",1);
        Form form1("samir", 2, 20);
        form1.beSigned(sejuani);
        std::cout << form1;
        // sejuani.signForm(form1);

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}