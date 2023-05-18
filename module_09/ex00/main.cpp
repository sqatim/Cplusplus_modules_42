#include "Bitcoin.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac == 2)
        {
            Bitcoin bitcoinPrice;
            bitcoinPrice.calculePrices(av[1]);
        }
        else
            throw std::string("Error: you need to enter a file");
    }
    catch (std::string const &message)
    {
        std::cerr << message << std::endl;
    }
    return (0);
}