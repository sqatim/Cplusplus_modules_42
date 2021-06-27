#include "Bureaucrat.hpp"

int main()
{
    try
    {
    Bureaucrat sejuani("lol",120);
    Bureaucrat vayne(sejuani);
    Bureaucrat zed = vayne;
    std::cout << zed;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}