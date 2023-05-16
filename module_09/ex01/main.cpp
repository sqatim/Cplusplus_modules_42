#include <iostream>
#include <stdio.h>
#include <stack>
#include "ReversePolishNotation.hpp"

int main(int ac, char **av)
{
    try
    {

        if (ac == 2)
            ReversePolishNotation rpn(av[1]);
        else
            throw std::string("Error: you need to enter one argument");
    }
    catch (std::string const &message)
    {
        std::cerr << message << std::endl;
    }
    return (0);
}