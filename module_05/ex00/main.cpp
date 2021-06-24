#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat sejuani;
    try
    {
        for(int i =0; i < 151; i++)
        {
            sejuani.décrémentation();
            std::cout << sejuani.getGrade() <<  std::endl;
        }
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}