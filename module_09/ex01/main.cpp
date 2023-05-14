#include <iostream>
#include <stdio.h>
#include <stack>
#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        RPN rpn(av[1]);
    }
    return (0);
}