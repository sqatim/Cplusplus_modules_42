#include "Base.hpp"

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void) b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    
}


int main()
{
    Base *b = new Base();

    b = b->generate();
    identify(b);
    identify(*b);
    return (0);
}