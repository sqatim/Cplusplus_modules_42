#include "Convert.class.hpp"


int main(int ac, char **av)
{
	if(ac == 2)
	{
		try
		{
			Convert convert(av[1]);
		}
		catch(const std::invalid_argument& ia)
		{
			Convert::ImpossibleException a;
			std::cout <<  a.what() << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return (0);
}