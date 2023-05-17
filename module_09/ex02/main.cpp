#include "MergeInsertSort.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac > 1)
        {
            MergeInsertSort mergeInsert(&av[1]);
            std::cout << mergeInsert << std::endl;
        }
        else
            throw std::string("Error: you need to enter one argument");
    }
    catch (std::string const &message)
    {
        std::cerr << message << std::endl;
    }
    return (0);
}