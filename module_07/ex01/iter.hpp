#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, int length, void (f(T)))
{
    int i = 0;
    while(i < length)
    {
        f(array[i]);
        i++;
    }
}

template<typename T>
void ft_print(T str)
{
    std::cout << str << "\n";
}

#endif