#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> ar(5, 3);
        ar.at(0) = 1;
        ar.at(2) = 2;
        easyfind(ar, 3);
    }
    catch (std::string error)
    {
        std::cerr << error << std::endl;
    }
    return (0);
}