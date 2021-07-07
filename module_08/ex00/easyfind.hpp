#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>

template <typename T>
void easyfind(T container, int number)
{
    typename T::iterator pointer;

    pointer = std::find(container.begin(), container.end(), number);
    if(pointer == container.end())
        throw std::string("number Not found");
    std::cout << "number: \"" << number << "\" is founded" << std::endl;
}

#endif