#include "Bureaucrat.hpp"

int main()
{
    try
    {
    Bureaucrat sejuani("sejuani",151);
        // for(int i =0; i < 151; i++)
        // {
        //     sejuani.décrémentation();
        //     std::cout << sejuani.getGrade() <<  std::endl;
        // }
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}